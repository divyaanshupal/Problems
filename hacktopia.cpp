#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Unable to open file." << endl;
        return 1;
    }

    long long characters = 0;
    long long words = 0;
    long long lines = 0;

    string line;

    while (getline(file, line)) {
        lines++;                     // Count line
        characters += line.length(); // Count characters in line

        // Count words in line
        bool inWord = false;
        for (char ch : line) {
            if (isspace(ch)) {
                inWord = false;
            } else if (!inWord) {
                inWord = true;
                words++;
            }
        }
    }

    file.close();

    cout << "\nFile Statistics:\n";
    cout << "Lines      : " << lines << endl;
    cout << "Words      : " << words << endl;
    cout << "Characters : " << characters << endl;

    return 0;
}
