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

