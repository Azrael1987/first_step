// "C# ćwiczenia" Marcin Lis - ćwiczenie 4.4 - (5)
// mini porgram operujacy na wspolrzednych punktu z wykozystaniem zewnetrznej klasy
// kompilowac razem z zad_4_4b.cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication10
{
    class Program
    {
        static void Main()
        {
            Pkt punkt = new Pkt();
            Pkt pomocniczyPunkt;
            pomocniczyPunkt = punkt.PobierzWpsolrzedne();

            Console.WriteLine("Wspolrzedne punktu przed ustawieniem wartosci:");
            Console.WriteLine("Wspolrzedna x = " + pomocniczyPunkt.x);
            Console.WriteLine("Wspolrzedna y = " + pomocniczyPunkt.y);

            punkt.UstawWspolrzedne(1, 2);
            pomocniczyPunkt = punkt.PobierzWpsolrzedne();

            Console.WriteLine("Wspolrzedne punktu po ustawieniu wartosci:");
            Console.WriteLine("Wspolrzedna x = " + pomocniczyPunkt.x);
            Console.WriteLine("Wspolrzedna y = " + pomocniczyPunkt.y);

            Console.Read();
        }
    }
}
