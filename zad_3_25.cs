// obliczanie rownania kwadatewego na podstawie danych z wiersza polecen lub podanych przez uzytkwnikaw czasie dzialania programu 
// "C# ćwiczenia" Marcin Lis - ćwiczenie 3.25 - (4)
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication9
{
    class zad_3_25
    {
        static double pobieranieLiczb(string par)                   // funkcja pobierajaca parametry z klawiatury
        {
            double number = 0;
            bool sukces;            // kontrolka poprawnosci testu przy konwersji podanego argumentu na typ double
            do
            {
                Console.Write("Prosze podac {0} parametr rownania: ", par);
                try                 // proba konwersji na doublei  przejmowanie wyjatkow
                {
                    number = Double.Parse(Console.ReadLine());      // konwersja
                    sukces = true;                                  // kontorlka testu
            }
                catch (Exception)   // jesli wyjatek
                {
                    Console.WriteLine("To nie jest prawidlowa liczba rzeczywista!");    // wyjatek
                    sukces = false;                     // kontrolka testu
                    Console.Read();                     // zamrazacz  ekranu
                }
            }
            while (!sukces);             // petla wykonywna dopoki zdany test przy konwersji 
            return number;

        }

        static void Main(string[] args)
        {
            bool comendLine = true;         // kontrolka dla poprawnosci danych z wiersza polecen
            double parA = 0, parB = 0, parC = 0;

            if (args.Length < 3)        // test czy wprowadzono 3 parametry
            {
                comendLine = false;
            }
            if (comendLine)
            {
                try                 // test z przechwytywaniem wyjatkow dla konwersji typow 
                {
                    parA = Double.Parse(args[0]);
                    parB = Double.Parse(args[1]);
                    parC = Double.Parse(args[2]);
                }
                catch (Exception)
                {
                    Console.WriteLine("Jeden z wprowadzonych parametrow nie jest liczba rzeczywista!");     // zgloszenie wyjatku
                    comendLine = false;             // kontrolka poprawnosci argumentow z wiersza polecen
                    Console.Read();                 // zamrozenie ekranu

                }
            }
            if (!comendLine)
            {
                parA = pobieranieLiczb("pierwszy");  // slowa w nawiasach zostana podstawione w zapytaniu z funkcji pobieranieLiczb w miejsc  {0}
                parB = pobieranieLiczb("drugi");
                parC = pobieranieLiczb("trzeci");
            }

            double delta;                               // obliczanie delty rownania kwadratowego
            delta = parB * parB - 4 * parA * parC;

            Console.WriteLine("Rownanie " + parA + "x^2 + " + parB + "x + " + parC);       // wypisanie rozpatrywanego rownania

            if (parA == 0)          // sprawzenie czy rownanie jest kwadratowe
            {
                Console.WriteLine("nie jest rownaniem kwadratowym.");
                Console.ReadLine();
                return;
            }
            else if (delta < 0) // spradzenie czy rownanie posiada pierwiastki rzeczywiste
            {
                Console.WriteLine("nie ma rzeczywistych rozwiazan.");
                Console.ReadLine();
                return;
            }
            else if (delta == 0) // sprawdzenie czy rownanie posiada pierwiastek podwojny
            {
                double x0 = -parB / 2 * parA;
                Console.WriteLine("ma jeden podwojny pierwiastek: x0 = {0}", x0);
                Console.ReadLine();
                return;
            }
            else
            {
                double x1 = (-parB + Math.Sqrt(delta)) / 2 * parA;
                double x2 = (-parB - Math.Sqrt(delta)) / 2 * parA;
                Console.WriteLine("ma dwa pierwiastki: x1 = {0}, x2 = {1}", x1, x2);
                Console.ReadLine();
                return;


            }
        }
    }
}
