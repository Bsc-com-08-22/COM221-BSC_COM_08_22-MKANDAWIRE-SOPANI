#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Create an output file stream and open the file "example.txt"
    ofstream myfile("example.txt");

    // Check if the file is opened successfully
    if (myfile.is_open())
    {
        // If the file is open, write two lines of text to it
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        
        // Close the file
        myfile.close();
    }
    else
    {
        // If the file failed to open, print an error message
        cout << "Unable to open file.\n";
    }

    return 0;
}
