// "C# ćwiczenia" Marcin Lis - ćwiczenie 4.4 - (5)
// klasa ustalajaca lub pobierajcaca wpolrzedne punktu
// kompilowac razem z zad_4_4a.cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication10
{
    public class Pkt
    {
        public int x;
        public int y;

        public void UstawWspolrzedne(int wspX, int wspY)
        {
            x = wspX;
            y = wspY;
        }

        public Pkt PobierzWpsolrzedne()
        {
            Pkt punkt = new Pkt();
            punkt.x = x;
            punkt.y = y;
            return punkt;
        }
    }
}
