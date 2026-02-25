#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>

class Rectangle {
private:
    double x1, y1, x2, y2;

public:
    Rectangle();
    Rectangle(double x1, double y1, double x2, double y2);
    Rectangle(const Rectangle& other);

    double Area() const;
    double Perimeter() const;
    std::string GetInformation() const;
    
    Rectangle operator - (const Rectangle& other) const;
    Rectangle operator / (double n) const;
};

#endif