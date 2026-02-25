using System;

namespace RectangleLibrary
{
    public class Rectangle
    {
        private double x1, y1, x2, y2;

        public Rectangle()
        {
            x1 = 0;
            y1 = 0;
            x2 = 1;
            y2 = 1;
        }

        public Rectangle(double X1, double Y1, double X2, double Y2)
        {
            this.x1 = X1;
            this.y1 = Y1;
            this.x2 = X2;
            this.y2 = Y2;
        }

        public Rectangle(Rectangle other)
        {
            x1 = other.x1;
            y1 = other.y1;
            x2 = other.x2;
            y2 = other.y2;
        }

        public double Area()
        {
            double width = (x2 - x1 >= 0) ? x2 - x1 : x1 - x2;
            double height = (y2 - y1 >= 0) ? y2 - y1 : y1 - y2;
            double area = width * height;
            return area;
        }

        public double Perimeter()
        {
            double width = (x2 - x1 >= 0) ? x2 - x1 : x1 - x2;
            double height = (y2 - y1 >= 0) ? y2 - y1 : y1 - y2;
            double perimeter = 2 * (width + height);
            return perimeter;
        }

        public string GetInformation()
        {
            return "Координати " + x1 + " " + y1 + " " + x2 + " " + y2 + " Площа " + Area() + " Периметр " + Perimeter();
        }

        public static Rectangle operator -(Rectangle r1, Rectangle r2)
        {
            Rectangle res1 = new Rectangle(
                r1.x1 - r2.x1,
                r1.y1 - r2.y1,
                r1.x2 - r2.x2,
                r1.y2 - r2.y2
                );
            return res1;
        }

        public static Rectangle operator /(Rectangle r1, double n)
        {
            if (n == 0)
            {
                return new Rectangle(r1);
            }
            Rectangle res2 = new Rectangle(
                r1.x1 / n,
                r1.y1 / n,
                r1.x2 / n,
                r1.y2 / n
            );
            return res2;
        }
    }
}