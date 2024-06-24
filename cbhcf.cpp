#include <iostream>
#include <fstream>
#include <cctype> // For isdigit and isalpha functions
using namespace std;

int main() {
    ifstream inFile("input.txt");

    if (!inFile.is_open()) {
        cerr << "Error opening the file for reading.\n";
        return 1; // Return with an error code
    }

    char ch;
    int digitCount = 0, alphabetCount = 0, spaceCount = 0;

    while (inFile.get(ch)) {
        if (isdigit(ch)) {
            digitCount++;
        } else if (isalpha(ch)) {
            alphabetCount++;
        } else if (isspace(ch)) {
            spaceCount++;
        }
    }

    cout << "Count of Digits: " << digitCount << endl;
    cout << "Count of Alphabets: " << alphabetCount << endl;
    cout << "Count of Spaces: " << spaceCount << endl;

    inFile.close(); // Close the file

    return 0;
}
