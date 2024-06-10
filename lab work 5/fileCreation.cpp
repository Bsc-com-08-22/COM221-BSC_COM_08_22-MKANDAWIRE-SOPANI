#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int num_vowels(const string& str) {
    int count = 0;
    for (char f : str) {
        if (tolower(f) == 'a' || tolower(f) == 'e' || tolower(f) == 'i' || tolower(f) == 'o' || tolower(f) == 'u') {
            count++;
        }
    }
    return count;
}
int num_words(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        }
        else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}
string reverse(const string& str) {
    string reversedStr(str.rbegin(), str.rend());
    return reversedStr;
}
string capital_letter(const string& str) {
    string result = str;
    bool capitalizeNext = true; 
    for (size_t i = 0; i < str.length(); ++i) {
        if (isalpha(str[i])) {
            if (capitalizeNext) {
                result[i] = toupper(str[i]); 
                capitalizeNext = false;
            }
            else {
                capitalizeNext = (str[i] == ' '); 
            }
        }
        else {
            capitalizeNext = true;
        }
    }
    return result; 
}

int main() {
    ifstream file("text_file.txt"); 
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);

    cout << "Contents of the file: " << fileData << endl;

   
    int numVowels = num_vowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    int numWords = num_words(fileData);
    cout << "Number of words: " << numWords << endl;

    string rev_stat = reverse(fileData);
    cout << "Reversed statement: " << rev_stat << endl;

    string capitalizedStatement = capital_letter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedStatement << endl;


    file.close();

    return 0;
}
