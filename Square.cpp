#include "Square.hpp"
#include <iostream>


Square::Square(Color c, double x) : Rectangle(c, x, x)
{}

double Square::getArea() const
{
    return getX() * getX();
}

double Square::getPerimeter() const
{
    return 4 * getX();
}

void Square::print() const
{
    std::cout << "Square:      x: " << getX() << std::endl
              << "          area: " << getArea() << std::endl
              << "     perimeter: " << getPerimeter() << std::endl;
}

