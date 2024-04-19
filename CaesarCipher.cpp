#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Llogarit frekuencat e shkronjave dhe kthen si map
map<char, double> countFrequencies(const string& text) {
    map<char, int> frequencyCount;
    int totalLetters = 0;

    for (char c : text) {
        if (isalpha(c)) {
            char letter = tolower(c); // Konverton në shkronjë të vogël
            frequencyCount[letter]++;
            totalLetters++;
        }
    }

    // Konverton në përqindje
    map<char, double> frequencies;
    for (auto& pair : frequencyCount) {
        frequencies[pair.first] = (double)pair.second / totalLetters * 100;
    }

    return frequencies;
}
// Gjen shkronjën më të zakonshme
char findMostCommonLetter(const map<char, double>& frequencies) {
    pair<char, double> max = *max_element(frequencies.begin(), frequencies.end(),
    [](const pair<char, double>& a, const pair<char, double>& b) {
        return a.second < b.second;
    });

    return max.first;
}

// Dekripton tekstin e dhënë me një shift të caktuar
string decryptCaesarCipher(const string& text, int shift) {
    string decryptedText;
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - shift - base + 26) % 26 + base;
        }
        decryptedText += c;
    }
    return decryptedText;
}

int main() {
    ifstream file("teksti.txt");
    string text((istreambuf_iterator<char>(file)),
                (istreambuf_iterator<char>()));
    
    file.close();

    // Kontrollon nëse teksti është i zbrazët
    if (text.empty()) {
        cerr << "Fajlli eshte bosh ose nuk mund te lexohet." << endl;
        return 1;
    }

    // Llogarit frekuencat
    map<char, double> frequencies = countFrequencies(text);
    
    // Shfaq frekuencat e shkronjave
    for (const auto& pair : frequencies) {
        cout << "Shkronja '" << pair.first << "' eshte perdorur " << pair.second << "% te kohes." << endl;
    }

    // Gjen shkronjën më të zakonshme dhe llogarit shift-in
    char commonLetter = findMostCommonLetter(frequencies);
    int shift = (commonLetter - 'e' + 26) % 26;

    // Dekripton tekstin
    string decryptedText = decryptCaesarCipher(text, shift);
    cout << "Teksti i dekriptuar: " << decryptedText << endl;

    return 0;
}
