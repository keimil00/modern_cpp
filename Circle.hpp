#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    Circle() = delete; // doesn't allow to call default constructor
    explicit Circle(Color c, double r = 1);
    Circle(const Circle & other) = default;

    double getArea() const;
    double getPerimeter() const;
    double getRadius() const;
    void print() const;

private:


    double r_;
};
