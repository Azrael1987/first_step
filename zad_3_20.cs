// przyjmowanie argumentow z wiersza polecen cmd.exe i konwersja z z typ u string na  int/double oraz sumowanie liczb
// "C# ćwiczenia" Marcin Lis - ćwiczenie 3.20 - (2)

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication7
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2;
            if (args.Length < 2)
            {
                Console.WriteLine("Nalezy podac dwa argunemty w wierszu polecen.");
                Console.ReadLine();             // zamrazanie ekranu
                return;
            }
            try                 // proba konwersji z przechwytywaniem wyjatkow
            {
                num1 = Int32.Parse(args[0]);        // konwersja z string na int
                num2 = Int32.Parse(args[1]);
            }
            catch(Exception)    // wyrzucanie komunikatu o wyjatku
            {
                Console.WriteLine("Jeden z argunetnow nie jest poprawna laczba!");      // trasc zglaszanego bledu
                Console.ReadLine();             // zamrazanie ekranu
                return;
            }
            Console.WriteLine("Twoje liczby to: " + num1 + ", " + num2 + ".");
            Console.WriteLine("wynik dodawania argumentow to: {0}", num1 + num2);
            Console.ReadLine();         // zamrazanie ekranu
        }
    }
}
