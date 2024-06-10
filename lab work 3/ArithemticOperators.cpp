#include <iostream>
using namespace std;

main()
{
    int a = 21;
    int b = 10;
    int c;

    c = a +b;
    cout << "line 1 - Value of c is : " << c << endl;

    c = a + b;
    cout << "line 2 - Value of c is : " << c << endl;

    c = a * b;
    cout << "line 3 - Value of c is : " << c << endl;

    c = a / b;
    cout << "line 4 - Value of c is : " << c << endl;

    c = a % b;
    cout << "line 5 - Value of c is : " << c << endl;

    c = a++;
    cout << "line 6 - Value of c is : " << c << endl;

    c = a--;
    cout << "line 7 - Value of c is : " << c << endl;

    return 0;
}