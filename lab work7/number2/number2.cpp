#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {

    Rectangle rectangle1;

    float length1, width1;

    cout << "Enter length of the first rectangle: ";
    cin >> length1;

    cout << "Enter width of the first rectangle: ";
    cin >> width1;

    rectangle1.setLength(length1);
    rectangle1.setWidth(width1);

    float area1 = rectangle1.calculateArea();

    cout << "Area of the first rectangle: " << area1 << endl;

   
    float length2, width2;

    cout << "Enter length of the second rectangle: ";
    cin >> length2;

    cout << "Enter width of the second rectangle: ";
    cin >> width2;

    Rectangle rectangle2(length2, width2);

    float area2 = rectangle2.calculateArea();

    cout << "Area of the second rectangle: " << area2 << endl;

    return 0;
}
