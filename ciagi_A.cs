// Program liczacy sume ciagu artmetycznego, silnie, a takze wypisuje ciag Fibonacciego oraz sume jego elementow
// ciagi_A.cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication11
{
    class ciagi_A
    {
        public static ulong pobierzLiczbe (string param)
        { 


            bool sukces = true;
            ulong numer = 0;

            do
            {
                Console.WriteLine("Podaj dla ilu elementow policzyc {0} :", param);

                try     //przejmowanie wyjatkow
                {
                    numer = UInt64.Parse(Console.ReadLine());
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
            ulong valueFib;
            ulong valueSumArt;
            ulong valueSil;

            Console.WriteLine("\n\tProgram do oblicznia sumy ciagu artmetycznego silni");
            Console.WriteLine("\tz liczby oraz sumy kolejnych el. ciagu Fibonacciego.\n\n");

            valueFib = pobierzLiczbe("ciagu Fibonacciego");
            valueSumArt = pobierzLiczbe("ciagu artmetycznego");
            valueSil = pobierzLiczbe("silnie");
            
                                     // Suma ciagu artemtycznego 
                     try             // przejmowanie wyjatkow
                     {
                         checked
                         {
                            ulong sumA = (((1+(valueSumArt-1)+1)* valueSumArt)/2);
                            Console.WriteLine("\nSuma ciagu artemtycznego dla {0} wynosi: {1}", valueSumArt, sumA);
                         }
                     }
                     catch (Exception)
                     {
                         Console.WriteLine("\a\nBlad przepelnienia calkowitego");
                         Console.WriteLine(valueSumArt + " to zbyt wiele el. ciagu artmetycznego do obliczenia");
                         
                     }
      



            for (ulong i = 1, sumG = 1; i <= valueSil; i++)         // Silnia za pomoca petli for (chociaz jest na to  prosty wzor)
                {
                    try         // przejmowanie wyjatkow
                    {

                        checked       // sprawdzenie przepelnienia calkowitego
                        {
                            sumG *= i;
                            if (i == valueSil)
                                Console.WriteLine("\nSilnia z {0} wynosi: {1}", i, sumG);
                        }
                    }
                    catch (Exception)
                    {
                        Console.WriteLine("\a\nBlad przepelnienia calkowitego");
                        Console.WriteLine(valueSil + " to zbyt wiele el. silni do obliczenia");
                        break;
                    }
                }
                
                Console.WriteLine("\nElementy ciagu Fibonacciego:");
                Console.WriteLine("0) 0");

                for (ulong i = 0, prevSumF = 1, curSumF = 1; i < valueFib; i++)    // Suma ciagu Fibonacciego za pomoca petli for 
                {
                    try             // przejmowanie wyjatkow
                    {
                        checked    // sprawdzenie przepelnienia calkowitego
                        {
                            Console.WriteLine("{0}) {1} ", i + 1, prevSumF);
                            ulong newSumF = prevSumF + curSumF;
                            prevSumF = curSumF;
                            curSumF = newSumF;
                            if (i == (valueFib - 1))
                            {
                                Console.WriteLine("Suma {0} elementow ciagu Fibonacciego wynosi: {1}", i + 1, newSumF - 1);
                            }
                        }
                    }
                    catch (Exception)
                    {
                        Console.WriteLine("\a\nBlad przepelnienia calkowitego");
                        Console.WriteLine(valueFib + " to zbyt wiele el. ciagu Fibonacciego do obliczenia");
                        break;
                    }
                }
            

            Console.WriteLine("\nWcisnij dowolny klawisz, aby zakonczyc");
            Console.ReadKey();         // w celu zamrorzenia ekranu

        }
    }
}
