#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    string line;

    // Create an input file stream and open the file "example.txt" for reading
    ifstream myfile("example.txt");

    
    if (myfile.is_open())
    {

        while (getline(myfile, line))
        {
            
            cout << line << '\n';
        }
        
        
        myfile.close();
    }
    else
    {
        
        cout << "Unable to open file";
    }
    
    return 0;
}
