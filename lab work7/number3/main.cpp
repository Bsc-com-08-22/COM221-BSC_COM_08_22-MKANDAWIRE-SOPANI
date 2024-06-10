#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace shapes;
using namespace std;

int main() {
    char choice;
    do {
        cout << "Select shape to calculate area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            float side;
            cout << "Enter side length of square: ";
            cin >> side;

            Square square(side);
            float area = Area::calculateSquareArea(square);
            cout << "Area of square: " << area << endl;
            break;
        }
        case '2': {
            float base, height;
            cout << "Enter base of triangle: ";
            cin >> base;
            cout << "Enter height of triangle: ";
            cin >> height;

            Triangle triangle(base, height);
            float area = Area::calculateTriangleArea(triangle);
            cout << "Area of triangle: " << area << endl;
            break;
        }
        case '3': {
            float radius;
            cout << "Enter radius of circle: ";
            cin >> radius;

            Circle circle(radius);
            float area = Area::calculateCircleArea(circle);
            cout << "Area of circle: " << area << endl;
            break;
        }
        case '4':
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != '4');

    return 0;
}
