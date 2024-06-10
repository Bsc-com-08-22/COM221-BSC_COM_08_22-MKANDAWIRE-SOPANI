#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rectangle;

    float length1, width1;

    cout << "Enter length of the rectangle: ";
    cin >> length1;

    cout << "Enter width of the rectangle: ";
    cin >> width1;

    rectangle.setLength(length1);
    rectangle.setWidth(width1);

    float area = rectangle.calculateArea();

    cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
