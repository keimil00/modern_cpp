#pragma once

#include "Shape.hpp"

enum Color : unsigned char;

class Rectangle : public Shape
{
public:
    Rectangle() = delete;
    explicit Rectangle(Color c, double x = 1, double y = 1);
    Rectangle(const Rectangle & other) = default;

    double getArea() const override;
    double getPerimeter() const override;
    double getX() const; // Only virtual function can be final
    double getY() const;
    void print() const override;

private:

    double x_;
    double y_;
};
