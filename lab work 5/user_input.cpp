#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Please enter an integer value between 5 and 10:"<<endl;
   cin >> num;

    while (num < 5 || num > 10 || cin.fail()) {
        if (!num) {
            cout << "Invalid input." << endl;
        }
        else {
            cout << " Please enter an integer value between 5 and 10: ";
        }
        cin.clear();
        cin.ignore();
        //take another input
       cin >> num;
    }

    cout << "Your input value ("<<num<<") has been accepted." << endl;

    return 0;
}
