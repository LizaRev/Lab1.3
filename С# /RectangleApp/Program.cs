using System;
using RectangleLibrary;

class Program
{
    static void Main()
    {
        Rectangle Q1 = new Rectangle();

        Console.WriteLine("Введіть, будь ласка, координати для Q2:");
        Console.Write("x1: "); double x1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("y1: "); double y1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("x2: "); double x2 = Convert.ToDouble(Console.ReadLine());
        Console.Write("y2: "); double y2 = Convert.ToDouble(Console.ReadLine());

        Rectangle Q2 = new Rectangle(x1, y1, x2, y2);
        Rectangle Q3 = new Rectangle(Q2);

        Console.WriteLine("Початкові прямокутники:");
        Console.WriteLine("Q2: " + Q2.GetInformation());
        Console.WriteLine("Q3: " + Q3.GetInformation());
        Console.WriteLine("Q1: " + Q1.GetInformation());

        Q2 = Q2 / 2;
        Console.WriteLine(" Q2 після ділення Q2 на 2:");
        Console.WriteLine("Q2: " + Q2.GetInformation());

        Q1 = Q3 - Q2;
        Console.WriteLine(" Q1 після Q3 - Q2:");
        Console.WriteLine("Q1: " + Q1.GetInformation());

        Console.WriteLine("Значення всіх прямокутників:");
        Console.WriteLine("Q1: " + Q1.GetInformation());
        Console.WriteLine("Q2: " + Q2.GetInformation());
        Console.WriteLine("Q3: " + Q3.GetInformation());
    }
}