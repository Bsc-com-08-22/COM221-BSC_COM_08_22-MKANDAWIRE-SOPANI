#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration) {
    case 0:
        cout << "Your subscription has expired." << endl;
        break;
    case 1:
        cout << "Your subscription expires within a day!" << endl
            << "Renew now and save 20%!";
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl
            << "Renew now and save 10%! ";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "Your subscription will expire soon. Renew now! " << endl;
        break;

    default:
        cout << "You have an active subscription. " << endl;
        break;
    }

    cout << daysUntilExpiration << " ";
    return 0;
}
