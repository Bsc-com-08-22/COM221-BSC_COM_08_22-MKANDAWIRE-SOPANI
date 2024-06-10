#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static float calculateSquareArea(const Square& square);
        static float calculateTriangleArea(const Triangle& triangle);
        static float calculateCircleArea(const Circle& circle);
    };
}

#endif
