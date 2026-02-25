#include "Rectangle.h"
#include <string>

Rectangle::Rectangle(){
    x1 = 0;
    y1 = 0;
    x2 = 1;
    y2 = 1;
}

Rectangle::Rectangle(double X1,double Y1, double X2, double Y2){
   x1 = X1;
   y1 = Y1;
   x2 = X2;
   y2 = Y2;
}

Rectangle::Rectangle(const Rectangle &other){
    x1 = other.x1;
    y1 = other.y1;
    x2 = other.x2;
    y2 = other.y2;
}

double Rectangle::Area() const{
    double width = (x2 - x1 >= 0) ? (x2 - x1) : (x1 - x2);
    double height = (y2 - y1 >= 0) ? (y2 - y1) : (y1 - y2);
    return width * height;
}

double Rectangle::Perimeter() const{
    double width = (x2 - x1 >= 0) ? (x2 - x1) : (x1 - x2);
    double height = (y2 - y1 >= 0) ? (y2 - y1) : (y1 - y2);
    return 2 * (width + height);
}

std::string Rectangle::GetInformation() const {
    return "Координати " + std::to_string(x1) + " " + std::to_string(y1) + " " + 
           std::to_string(x2) + " " + std::to_string(y2) + 
           " Площа " + std::to_string(Area()) + 
           " Периметр " + std::to_string(Perimeter());
}

Rectangle Rectangle::operator - (const Rectangle& other) const {
     Rectangle res(
        x1 - other.x1,
        y1 - other.y1,
        x2 - other.x2,
        y2 - other.y2
    );
    return res;
}

Rectangle Rectangle::operator / (double n) const {
    if (n == 0)  return Rectangle(x1, y1, x2, y2);
    Rectangle res2(
        x1 / n,
        y1 / n,
        x2 / n,
        y2 / n
    );
    return res2;
}