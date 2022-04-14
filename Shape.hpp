#pragma once


enum Colors : unsigned char;

class Shape
{
    Colors color;
public:
    Shape() = delete;
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
