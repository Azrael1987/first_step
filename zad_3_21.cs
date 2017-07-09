// rozwiazywanie  rownania kwadratowego na podstawie wspołczynników podanych w wierszu polecen
// "C# ćwiczenia" Marcin Lis - ćwiczenie 3.21 - (3)
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{
    class Program
    {
        static void Main(string[] args)
        {
            double parA, parB, parC;

            if (args.Length < 3)
            {
                Console.WriteLine("Wywolanie programu zad_3.21.exe wspolczynniki A, wspolczynniki B, wspolczynnik C");
                Console.WriteLine("Za malo wspolczynnikow!");
                Console.ReadLine();
                return;
            }
            try
            {
                parA = Double.Parse(args[0]);
                parB = Double.Parse(args[1]);
                parC = Double.Parse(args[2]);
            }
            catch(Exception)
            {
                Console.WriteLine("Jeden z argunetow nie jest liczba!");
                Console.Read();
                return;
            }
            double delta;
            delta = parB * parB - 4 * parA * parC;

            Console.WriteLine("Rownanie " + parA + "x^2 + " + parB + "x + " + parC);

            if (parA == 0)
            {
                Console.WriteLine("nie jest rownaniem kwadratowym.");
                Console.ReadLine();
                return;
            }
            else if (delta < 0)
            {
                Console.WriteLine("nie ma rzeczywistych rozwiazan.");
                Console.ReadLine();
                return;
            }
            else if (delta == 0)
            {
                double x0 = -parB / 2 * parA;
                Console.WriteLine("ma jeden podwojny pierwiastek: x0 = {0}", x0);
                Console.ReadLine();
                return;
            }
            else
            {
                double x1 = (-parB + Math.Sqrt(delta) )/ 2 * parA;
                double x2 = (-parB - Math.Sqrt(delta)) / 2 * parA;
                Console.WriteLine("ma dwa pierwiastki: x1 = {0}, x2 = {1}", x1, x2);
                Console.ReadLine();
                return;
            }
        }

    }
}
