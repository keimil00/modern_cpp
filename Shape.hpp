#pragma once


enum Color : unsigned char;

class Shape
{
    Color color;
public:
    Shape() = delete;
    Shape(Color c);
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
