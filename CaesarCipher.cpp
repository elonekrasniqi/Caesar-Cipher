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
