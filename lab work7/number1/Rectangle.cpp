#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

Rectangle::~Rectangle() {

}

void Rectangle::setLength(float length1) {
    length = length1;
}

void Rectangle::setWidth(float width1) {
    width = width1;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
