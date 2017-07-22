// Program liczacy sume ciagu artmetycznego i geometrycznego, a takze wypisuje ciag Fibonacciego oraz sume jego elementow
// ciagi_A.cs

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication11
{
    class ciagi
    {
        public static int pobierzLiczbe (string param)
        { // ciag Fibonacciego


            bool sukces = true;
            int numer = 0;

            do
            {
                Console.WriteLine("Podaj dla ilu elementow policzyc ciag {0} :", param);

                try     //przejmowanie wyjatkow
                {
                    numer = Int32.Parse(Console.ReadLine());
                    sukces = true;

                }
                catch (Exception)
                {
                    Console.WriteLine("Blad konwersji z typu string na typ liczbowy");
                    sukces = false;
                }

            } while (!sukces);
            return numer;           
    }

static void Main(string[] args)
        {
            int valueFib;
            int valueSumArt;
            int valueSumGeo;

            valueFib = pobierzLiczbe("Fibonacciego");
            valueSumArt = pobierzLiczbe("artmetycznego");
            valueSumGeo = pobierzLiczbe("geometrycznego");


            if (true)
            {
                for (int i = 1, sum = 0; i <= valueSumArt; i++)          // Suma ciagu artemtycznego za pomoca petli for (chociaz jest na to  prosty wzor)
                {
                    sum += i;
                    if (i == valueSumArt)
                        Console.WriteLine("\nSuma ciagu artemtycznego dla {0} wynosi: {1}", i, sum);
                }

                for (int i = 1, sum = 1; i <= valueSumGeo; i++)         // Suma ciagu geometrycznego za pomoca petli for (chociaz jest na to  prosty wzor)
                {
                    sum *= i;
                    if (i == valueSumGeo)
                    Console.WriteLine("\nSuma ciagu geometrycznego dla {0} wynosi: {1}", i, sum);
                }


                Console.WriteLine("\nElementy ciagu Fibonacciego:");
                Console.WriteLine("0) 0");
                for (int i = 0, prevSumF = 1, curSumF = 1; i < valueFib; i++)
                {
                    Console.WriteLine("{0}) {1} ", i+1 , prevSumF);
                    int newSumF = prevSumF + curSumF;
                    prevSumF = curSumF;
                    curSumF = newSumF;
                    if (i == (valueFib-1))
                        {
                        Console.WriteLine ("Suma {0} elementow ciagu Fibonacciego wynosi: {1}", i+1, newSumF-1);
                        }
                }
            }
            Console.WriteLine("Wcisnij Enter aby zakonczyc");
            Console.Read();         // w celu zamrorzenia ekranu

        }
    }
}
