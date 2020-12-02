#include "ShapesGood.h"
#include <stdio.h>
#include <iostream>
/*Shape Definitions*/
Shape::Shape(int _len, int _width, const string& _color) {
    length = _len;
    width = _width;
    color = _color;
}

int Shape::getLength() {
    return length;
}

int Shape::getWidth() {
    return width;
}

string Shape::getColor() {
    return color;
}

void Shape::draw() {
    cout << "This is the base class draw, no shape will be drawn";

}

Shape::~Shape() {

}
/*Shape Definitions*/

/*Fillable Definitions*/
Fillable::Fillable(const string& _color) {
    this->fillColor = _color;
}

void Fillable::drawFill() {
    cout << " With " + fillColor + " fill.";
}

Fillable::~Fillable() {

}
/*Fillable Definitions*/

/*Text Definitions*/
Text::Text(const string& _text) {
    text = _text;
}

void Text::drawText() {
    cout << " Containing the text: \"" << text << "\".";
}

Text::~Text() {

}
/*Text Definitions*/

/*Square Definitions*/
Square::Square(int _len, int _width, const string& _color) : Shape(_len, _width, _color) {
    
}

void Square::draw() {
    cout << "\nDrawing a " + getColor() + " Square";
}

Square::~Square() {

}
/*Square Definitions*/


/*Filled Square Definitions*/
FilledSquare::FilledSquare(int _len, int _width, const string& _color, const string& _fillColor) : Square(_len, _width, _color), Fillable(_fillColor) {
    
}

void FilledSquare::draw() {
    cout << "\nDrawing a " + getColor() + " Square";
    this->drawFill();
}

FilledSquare::~FilledSquare() {

}
/*Filled Square Definitions*/

/*FilledTextSquare Definitions*/
FilledTextSquare::FilledTextSquare(int _len, int _width, const string& _color, const string& _fillColor, const string& _text) : FilledSquare(_len, _width, _color, _fillColor), Text(_text) {

}

void FilledTextSquare::draw() {
    cout << "\nDrawing a " + getColor() + " Square";
    this->drawFill();
    this->drawText();
}

FilledTextSquare::~FilledTextSquare() {

}

/*FilledTextSquare Definitions*/


/*Circle Definitions*/
Circle::Circle(int _len, int _width, const string& _color) : Shape(_len, _width, _color) {

}

void Circle::draw() {
    cout << "\nDrawing a " + getColor() + " Circle";
}

Circle::~Circle() {

}
/*Circle Definitions*/

/*FilledCircle Definitions*/
FilledCircle::FilledCircle(int _len, int _width, const string& _color, const string& _fillColor) : Circle(_len, _width, _color), Fillable(_fillColor) {

}

void FilledCircle::draw() {
    cout << "\nDrawing a " + getColor() + " Circle";
    drawFill();
}

FilledCircle::~FilledCircle() {

}
/*FilledCircle Definitions*/

/*Arc Definitions*/
Arc::Arc(int _len, int _width, const string& _color) : Shape(_len, _width, _color) {

}

void Arc::draw() {
    cout << "\nDrawing a " + getColor() + " arc";
}

Arc::~Arc() {

}
/*Arc Definitions*/

