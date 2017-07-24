// szacowanie_A.cs - Program do szacowania czasu potrzebnego do realizacji projektu oparty na rozkladzie prawdopodobienstwa.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication12
{
    class Szacowanie_A
    {
       
        public static int pobierzLiczbe(string param)           // metoda pobierajaca dane z kalawiatury
        { 
            bool sukces = true;
            int numer = 0;

            do
            {
                Console.WriteLine("Podaj najbardziej {0} ilosc czasu potrzebna na wykonie zadania:", param);

                try     //przejmowanie wyjatkow
                {
                    numer = Int32.Parse(Console.ReadLine());        // konwersja ze string na int
                    sukces = true;
                }
                catch (Exception)
                {
                    Console.WriteLine("Blad konwersji z typu string na typ liczbowy");
                    sukces = false;
                }

            } while (!sukces);          // powtarzaj do poki nie ma sukcesu
            return numer;
        }

        public static double rozkladPrawd (int poz, int rel, int neg)  // metoda liczaca rozklad prawdopodbienstwa
        {
            int valueReal = rel;        // najbardzieje prawdopodobny czas realizacji projektu
            int valuePes = neg;         // najbardzieje pesymistyczny czas realizacji projektu
            int valueOpt = poz;         // najbardzieje optymistyczny czas realizacji projektu

            double ni = Math.Round(((valueOpt + (4 * valueReal) + valuePes) / 6D), 1);   // zaokralij wynik do 1 miejsca po przecinku, 6D wymusza konwersje na typ double

            return ni;
        }

        public static double odchylStand(int poz, int neg)      // metoda liczaca odchylenie standardowe
        {
            int valuePes = neg;        // najbardzieje pesymistyczny czas realizacji projektu
            int valueOpt = poz;        // najbardzieje optymistyczny czas realizacji projektu

            double sigma = Math.Round(((valuePes - valueOpt) / 6D), 1);             //  zaokralij wynik do 1 miejsca po przecinku, 6D wymusza konwersje na typ double

            return sigma;
        }
        

        static void Main(string[] args)
        {
            Console.WriteLine("\n\tProgram do szacowania czasu potrzebnego do realizacji");
            Console.WriteLine("\tprojektu oparty na rozkladzie prawdopodobienstwa.\n\n");

            int valueReal = pobierzLiczbe("prawdopodobna");     // najbardzieje prawdopodobny czas realizacji projektu
            int valueNeg = pobierzLiczbe("pesymistyczna");      // najbardzieje pesymistyczny czas realizacji projektu
            int valuePoz = pobierzLiczbe("optymisytczna");      // najbardzieje optymistyczny czas realizacji projektu

            double ni = rozkladPrawd(valuePoz, valueReal, valueNeg);    // rozklad prawdopodbienstwa
            double sigma = odchylStand(valuePoz, valueNeg);             // odchylenie standardowe

            Console.WriteLine("\nCzas potrzebny na to zadanie to " + ni + "/" + sigma + " jednostek czasu." );
            Console.WriteLine("\nZadanie moze zajac " + ni + " jednostek czasu, \nale tez " + Math.Ceiling(ni + sigma) 
                + " jedostek czasu, a nawet " + Math.Ceiling(ni + 2 * sigma) + " jednostek czasu.");
            //metoda Math.Celing zaokragla w gore do pelnych wartosci
            Console.ReadKey();
        }
    }
}
