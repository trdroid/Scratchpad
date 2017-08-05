using StudentService.Models;
using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Data.Entity.Infrastructure;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Threading.Tasks;
using System.Web.Http;
using System.Web.OData;

namespace StudentService.Controllers
{
    // A controller is a class that handles HTTP requests
    // Create a separate controller for each Entity set in an OData Service. 
    public class StudentsController : ODataController
    {
        // Use the StudentsContext class to access the database using Entity Framework
        StudentsContext db = new StudentsContext();

        private bool StudentExists(int id)
        {
            return db.Students.Any(x => x.Id == id);
        }

        // Override the Dispose method to dispose off the StudentsContext
        protected override void Dispose(bool disposing)
        {
            db.Dispose();
            base.Dispose(disposing);
        }

        // Add methods for all the CRUD operations

        // Get all students        
        [EnableQuery] // The EnableQuery attribute allows clients to specify query options such as $filter, $sort, $page
        public IQueryable<Student> Get()
        {
            return db.Students;
        }

        // Get a specific student
        [EnableQuery]
        public SingleResult<Student> Get([FromODataUri] int id)
        {
            IQueryable<Student> result = db.Students.Where(x => x.Id == id);

            return SingleResult.Create(result);
        }

        // Create a new student by adding it to the database
        public async Task<IHttpActionResult> Post(Student student)
        {
            if (!this.ModelState.IsValid)
            {
                return this.BadRequest(ModelState);
            }

            this.db.Students.Add(student);
            await this.db.SaveChangesAsync();
            return this.Created(student);
        }

        // Update a student (PATCH performs a partial update where the client specifies just the properties to update)
        public async Task<IHttpActionResult> Patch([FromODataUri] int id, Delta<Student> studentWithUpdatedProperties)
        {
            if (!ModelState.IsValid)
            {
                return this.BadRequest(this.ModelState);
            }

            var studentFromDb = await this.db.Students.FindAsync(id);

            if (studentFromDb == null)
            {
                return this.NotFound();
            }

            studentWithUpdatedProperties.Patch(studentFromDb);

            try
            {
                await this.db.SaveChangesAsync();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!StudentExists(id))
                {
                    return this.NotFound();
                }
                else
                {
                    throw;
                }
            }

            return this.Updated(studentFromDb);
        }

        // Replace a student (PUT expects the client to send values for all properties, including the ones that are not changing)
        public async Task<IHttpActionResult> Put([FromODataUri] int id, Student student)
        {
            if (!this.ModelState.IsValid)
            {
                return this.BadRequest(this.ModelState);
            }

            if (id != student.Id)
            {
                return this.BadRequest();
            }

            db.Entry(student).State = EntityState.Modified;

            try
            {
                await this.db.SaveChangesAsync();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!StudentExists(id))
                {
                    return this.NotFound();
                }
                else
                {
                    throw;
                }
            }

            return this.Updated(student);
        }

        // Delete a student
        public async Task<IHttpActionResult> Delete([FromODataUri] int id)
        {
            // Find the student with the specified id 
            var student = await this.db.Students.FindAsync(id);

            if (student == null)
            {
                return this.NotFound();
            }

            db.Students.Remove(student);
            await db.SaveChangesAsync();
            return this.StatusCode(HttpStatusCode.NoContent);
        }
    }
}
