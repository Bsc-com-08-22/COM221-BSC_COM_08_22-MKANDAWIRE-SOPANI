
#include <iostream>
using namespace std;

int main(){
    //creating an array
    string myArray[] = { "B123","C234","A345","C15","B177","G3003","C235","B179" };
    //looping through the array
    for (int i = 0; i < sizeof(myArray); i++) {
        //checking the first element
        if (myArray[i][0] == 'B'  ) {
            cout << myArray[i]<<endl;
        }
    }
}