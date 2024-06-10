#include <iostream>
#include <fstream>

using namespace std;

int main()
{   
    // Create and open a textfile
    ofstream Myfile("exampleFile.txt");

    // clse the file
    Myfile.close();

    return 0;

}