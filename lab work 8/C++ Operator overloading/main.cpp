#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    Jane.setAge(25);
    John.setAge(30);

    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << " kg" << endl;

    if (Jane == John) {
        cout << "This is the same person" << endl;
    }
    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }

    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }
    if (John > Jane) {
        cout << "John is older than Jane" << endl;
    }

    return 0;
}
