using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;
using System.Web;

namespace StudentService.Models
{
    public class StudentsContext : DbContext
    {
        public StudentsContext() : base("name=StudentsContext")
        {
        }

        public DbSet<Student> Students { get; set; }
    }
}