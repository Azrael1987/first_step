// przyjmowanie argumentow z wiersza polecen cmd.exe i wyswietanie na ekran
// "C# ćwiczenia" Marcin Lis - ćwiczenie 3.19 
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication6
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Liczba wprowadzonych danych: {0}", args.Length);

            for (int i = 0; i < args.Length; i++)
            {
                Console.WriteLine("argument nr {0}: {1}", i+1, args[i]);
            }
            Console.ReadLine();     // "zamrazanie" ekranu
        }
    }
}
