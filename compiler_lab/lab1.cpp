#include <bits/stdc++.h>
using namespace std;

// List of keywords
set<string> keywords = {
    "int", "float", "if", "else", "while", "return", "for", "char", "double", "void"
};

// Function to check if string is a number
bool isNumber(string s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

// Function to check if operator
bool isOperator(char c) {
    string ops = "+-*/=%<>!";
    return ops.find(c) != string::npos;
}

// Function to check special symbols
bool isSpecialSymbol(char c) {
    string symbols = "();{},";
    return symbols.find(c) != string::npos;
}

int main() {
    string input;
    cout << "Enter code (single line): ";
    getline(cin, input);

    string token = "";

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];

        // If space, process token
        if (isspace(c)) {
            if (!token.empty()) {
                if (keywords.count(token))
                    cout << token << " : Keyword\n";
                else if (isNumber(token))
                    cout << token << " : Number\n";
                else
                    cout << token << " : Identifier\n";
                token = "";
            }
        }
        // If operator
        else if (isOperator(c)) {
            if (!token.empty()) {
                if (keywords.count(token))
                    cout << token << " : Keyword\n";
                else if (isNumber(token))
                    cout << token << " : Number\n";
                else
                    cout << token << " : Identifier\n";
                token = "";
            }
            cout << c << " : Operator\n";
        }
        // If special symbol
        else if (isSpecialSymbol(c)) {
            if (!token.empty()) {
                if (keywords.count(token))
                    cout << token << " : Keyword\n";
                else if (isNumber(token))
                    cout << token << " : Number\n";
                else
                    cout << token << " : Identifier\n";
                token = "";
            }
            cout << c << " : Special Symbol\n";
        }
        else {
            token += c;
        }
    }

    // Last token
    if (!token.empty()) {
        if (keywords.count(token))
            cout << token << " : Keyword\n";
        else if (isNumber(token))
            cout << token << " : Number\n";
        else
            cout << token << " : Identifier\n";
    }

    return 0;
}