#include <iostream>
using namespace std;

int main()
{
    int* dynamic_int = new int;
    string* dynamic_string = new string;

    cout << "Enter number :" << endl;
    cin >> *dynamic_int;

    cout << "Enter string :" << endl;
    cin >> *dynamic_string;

    cout << "the dynamically allocated interger is :" << *dynamic_int << endl;
    cout << "the dynamically allocated string is :" << *dynamic_string;
    return 0;
}
