#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Shape {
    public:
        Shape();
        Shape(int _len, int _width, const string& _color);
        virtual ~Shape();
        int getLength();
        int getWidth();
        string getColor();
        virtual void draw();
    private:
        int length, width;
        string color;
};

class Fillable {
    public:
        Fillable(const string& _color);
        
        virtual void drawFill();
        virtual ~Fillable();
    private:
        string getFill();
        string fillColor;
};

class Text {
    public:
        Text(const string& _text);
        string getText();
        virtual void drawText();
        virtual ~Text();
    private:  
        string text;
};

class Square : public Shape {
    public:
        Square(int _len, int _width, const string& _color);
        virtual void draw();
        virtual ~Square();
};

class FilledSquare : public Square, public Fillable {
    public:
        FilledSquare(int _len, int _width, const string& _color, const string& _fillColor);
        virtual void draw();
        virtual ~FilledSquare();
};

class FilledTextSquare : public FilledSquare, public Text {
    public:
        FilledTextSquare(int _len, int _width, const string& _color, const string& _fillColor, const string& _text);
        virtual void draw();
        virtual ~FilledTextSquare();
};

class Circle : public Shape {
    public:
        Circle(int _len, int _width, const string& _color);
        virtual void draw();
        virtual ~Circle();
};

class FilledCircle : public Circle, public Fillable {
    public:
        FilledCircle(int _len, int _width, const string& _color, const string& _fillColor);
        virtual void draw();
        virtual ~FilledCircle();
};

class Arc : public Shape {
    public:
        Arc(int _len, int _width, const string& _color);
        void draw();
        virtual ~Arc();
};

