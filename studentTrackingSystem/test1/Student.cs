using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test1
{
    internal class Student
    {
        public string name_Surname;
        public string identityNo;
        public int age;
        public int schoolNo;
        public int grade;
        public char branch;

        public Student()
        {
            name_Surname = null;
            identityNo = null;
            age = 0;
            schoolNo = 0;
            grade = 0;
            branch = ' ';
        }

        public void print()
        {
            Console.WriteLine("\t" + name_Surname);
            Console.WriteLine("\t" + identityNo);
            Console.WriteLine("\t" + age);
            Console.WriteLine("\t" + schoolNo);
            Console.WriteLine("\t" + grade);
            Console.WriteLine("\t" + branch);
        }

        public void printBranch()
        {
            Console.WriteLine("\t" + branch);
        }

    }
}
