#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int daysUntilExpiration = rand() % 12;

    
    if (daysUntilExpiration > 10) {
     cout << "You have an active subscription. " << endl;
    }
    else if (daysUntilExpiration <= 10 && daysUntilExpiration >5) {
        cout << "Your subscription will expire soon. Renew now! " << endl;
    }
   
    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1) {
        cout << "Your subscription expires in " << daysUntilExpiration <<" days"<< endl
            << "Renew now and save 10%! ";
    }
    else if(daysUntilExpiration==1) {
        cout << "Your subscription expires within a day!" << endl
            << "Renew now and save 20%!";
    }
    else  {
        cout << "Your subscription has expired.";
    }

        
    return 0;
}
