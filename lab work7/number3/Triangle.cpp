#include "Triangle.h"

using namespace shapes;

Triangle::Triangle() {
    base = 0.0;
    height = 0.0;
}

Triangle::Triangle(double b, double h) {
    base = b;
    height = h;
}

Triangle::~Triangle() {

}

double Triangle::getBase() const {
    return base;
}

double Triangle::getHeight() const {
    return height;
}

