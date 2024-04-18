#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string readPlainTextFromFile(const string& fileName) {
    string result = "";
    string line;
    ifstream file(fileName);
    if (file.is_open()) {
        while (getline(file, line)) {
            result += line + "\n";
        }
        file.close();
    }
    else {
        cout << "File not found: " << fileName << endl;
    }
    return result;
}

string encrypt(const string& text, int key) {
    string result = "";
    for (char c : text) {
        if (c >= 'a' && c <= 'z') {
            result += char((c - 'a' + key) % 26 + 'a');
        }
        else if (c >= 'A' && c <= 'Z') {
            result += char((c - 'A' + key) % 26 + 'A');
        }
        else {
            result += c;
        }
    }
    return result;
}

string decrypt(const string& text, int key) {
    return encrypt(text, 26 - key);
}

