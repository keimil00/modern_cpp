#pragma once


enum Colors : unsigned char;

class Shape
{
    Colors color;
public:
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
