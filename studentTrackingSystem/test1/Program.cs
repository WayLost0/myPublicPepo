using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using test1;

internal class Program
{
    static Student[] list = new Student[0];

    static void anaMenu()
    {
        Console.Clear();
        Console.WriteLine("\t\t\t\t Öğrenci Takip Sistemi");
        Console.WriteLine("\t 1 - Yeni kayıt");
        Console.WriteLine("\t 2 - Ara");
        Console.WriteLine("\t 3 - Şubeler");
        Console.WriteLine("\t 4 - Öğrenci listesi");
        Console.WriteLine("\t 5 - Çıkış");
    }
   
    static void addStudent(Student[] a_list)
    {
        Student[] f_list2 = new Student[a_list.Length + 1];

        for (int i = 0; i < a_list.Length; i++)
        {
            f_list2 [i] = a_list [i];
        }

        Student stdt1 = new Student();

        Console.Clear ();
        Console.Write("\n\t İsim ve soy isim : ");
        stdt1.name_Surname = Console.ReadLine();
        Console.Write("\t Tc kimlik no : ");
        stdt1.identityNo = Console.ReadLine();
        Console.Write("\t Yaş : ");
        stdt1.age = Convert.ToInt32(Console.ReadLine());
        Console.Write("\t Okul no : ");
        stdt1.schoolNo = Convert.ToInt32(Console.ReadLine());
        Console.Write("\t Sınıf : ");
        stdt1.grade = Convert.ToInt32(Console.ReadLine());
        Console.Write("\t Şube : ");
        stdt1.branch = Convert.ToChar(Console.ReadLine());

        f_list2[a_list.Length] = stdt1;
        list = f_list2;
        Console.WriteLine("\n\n\t Başarıyla eklendi");

        Console.ReadKey();       
    }

    static void searchStudent(Student[] s_list, int no)
    {
        for (int i = 0; i < s_list.Length; i++)
        {
            if (s_list[i].schoolNo == no)
            {
                s_list[i].print();
                bool s_status = true;

                while (s_status)
                {
                    s_list[i].print();
                    altMenu();
                    Console.Write("\t Bir sayı girin : ");
                    int s_secim = Convert.ToInt32(Console.ReadLine());

                    switch (s_secim)
                    {
                        case 1:
                            fix(list);
                            altMenu();
                            break;
                        case 2:
                            delete();
                            altMenu();
                            break;
                        case 3:
                            s_status = false;
                            break;
                        default:
                            break;
                    }
                    break;
                }
            }
            else if (i + 1 == s_list.Length && s_list[i].schoolNo != no)
            {
                Console.WriteLine("\t Kayıt bulunamadı");
            }
        }

        Console.ReadKey();
    }

    static void Print(Student[] w_list)
    {
        Console.Clear();
        if (w_list.Length == 0)
        {
            Console.WriteLine("Hiç öğrenci kaydı yok.");
        }
        else
        {
            foreach (Student i in w_list)
            {
                i.print();
                Console.WriteLine();
            }
        }
    }

    static void branchList(Student[] b_list)
    {
        if (b_list.Length == 0)
            Console.WriteLine("Kayıtlı öğrenci yok");
        else
        {
            foreach (Student i in b_list)
            {
                Console.WriteLine(i.branch);
                
            }
        }
        Console.ReadKey();
    }

    static void altMenu()
    {
        Console.Clear();
        Console.WriteLine("\t 1 - Düzelt");
        Console.WriteLine("\t 2 - sil");
        Console.WriteLine("\t 3 - geri dön");
    }

    static void fix(Student[] f_list)
    {
        Console.Clear();
    }

    static void delete()
    { 
        Console.Clear();
    }

    private static void Main(string[] args)
    {
        anaMenu();
        bool status = true;

        while (status) 
        {
            Console.Write("\n\t Bir numara gir : ");
            int choose = Convert.ToInt32(Console.ReadLine());
            
            switch (choose)
            {
                case 1:
                    addStudent(list);
                    anaMenu();
                    break;
                case 2:
                    Console.Clear();
                    Console.Write("\t Öğrenci no : ");
                    int no = Convert.ToInt32(Console.ReadLine());
                    searchStudent(list,no);
                    anaMenu();
                    break;
                case 3:
                    branchList(list);
                    anaMenu();
                    break;
                case 4:
                    Print(list);
                    anaMenu();
                    break;
                case 5:
                    status = false;
                    break;
                default:
                    break;
            }
        }
    }
}