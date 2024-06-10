#include "Area.h"

namespace shapes {
    const float PI = 3.14;

    float Area::calculateSquareArea(const Square& square) {
        float side = square.getSideLength();
        return side * side;
    }

    float Area::calculateTriangleArea(const Triangle& triangle) {
        float base = triangle.getBase();
        float height = triangle.getHeight();
        return 0.5 * base * height;
    }

    float Area::calculateCircleArea(const Circle& circle) {
        float radius = circle.getRadius();
        return PI * radius * radius;
    }
}
