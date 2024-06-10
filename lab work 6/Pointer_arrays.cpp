#include <iostream>
using namespace std;

int main() {
    int rows;
    int columns;

    
    cout << "Enter the number of rows maximum is 3: ";
    cin >> rows;
    if (rows > 3) {
        std::cout << "rows too many." << endl;
        return 1;
    }

    cout << "Ener the number of columns maximum is 3: ";
    cin >> columns;
    if (columns > 3) {
        cout << "colums too many!!." << endl;
        return 1;
    }

    
    double** array_2d = new double* [rows];
    for (int i = 0; i < rows; ++i) {
        array_2d[i] = new double[columns];
    }

   
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "enter value for elements [" << i << "][" << j << "]: ";
            cin >> array_2d[i][j];
        }
    }


   cout << "Values o the 2D array are" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << array_2d[i][j] << " ";
        }
        cout <<endl;
    }


    for (int i = 0; i < rows; ++i) {
        delete[] array_2d[i];
    }
    delete[] array_2d;

    return 0;
}
