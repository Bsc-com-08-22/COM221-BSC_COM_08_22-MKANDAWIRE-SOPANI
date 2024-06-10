#include <iostream>
using namespace std;

double square(double side) {
    double area = side * side;
    return area;
}

double rectangle(double length, double width) {
    double area = length * width;
    return area;
}

double triangle(double height, double base) {
    double area = (height * base) * 1 / 2;
    return area;
}

int main() {
   int responce;
    double area;
    double base, height, length, width, side;
    
    while (true) {
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Exit the program" << endl;
        cin >> responce;

        if (responce == 4 ) {
            cout << "Exiting the program."<<endl;
            break;
        }
        else if (responce > 4) {
            cout << "Your input was :" << responce << " which is an invalid input" << endl;
            cout << "Please enter a valid input !!!" << endl;
            continue; 
        }

        switch (responce) {
            case 1:
                cout << "Enter side length" << endl;
                cin >> side;
                area = square(side);
                cout << "The area for this square is: " << area << endl;
                break;
            case 2:
                cout << "Enter length" << endl;
                cin >> length;
                cout << "Enter width" << endl;
                cin >> width;
                area = rectangle(length, width);
                cout << "The area for this rectangle is: " << area << endl;
                break;
            case 3:
                cout << "Enter length" << endl;
                cin >> height;
                cout << "Enter base" << endl;
                cin >> base;
                area = triangle(height, base);
                cout << "The area for this triangle is: " << area << endl;
                break;
        }
    }
    return 0;
}
