# Attacking Caesar's code by learning letter frequencies from any text file.

This is a semester project developed by second-year students at the University "Hasan Prishtina" - Faculty of Electrical and Computer Engineering,in the department of "Computer and Software Engineering" in the course "Data Security" - Prof.Blerim Rexha and Asc.Mergim Hoti.

### The idea of the Project

This repository contains a C++ implementation of the Caesar Cipher decryption tool and a letter frequency analysis function.

The steps to decrypt based on frequency analysis are as follows:

1. Calculate the frequency of each letter in the encrypted text using `calculateFrequency`.
2. Determine the most common letter in the encrypted text.
3. Calculate the shift (key) required to decrypt based on the frequency of letters, assuming the most common letter corresponds to 'e' in the English alphabet.
4. Use the `decrypt` method with the calculated key to decrypt the text.

This approach uses the frequency of letters in the encrypted text to automatically find the decryption key. This makes it effective for breaking Caesar Cipher encryption even without knowing the key beforehand.

### How to Use
Before running this code, ensure that you have the following prerequisites installed on your device:
- C++ compiler (e.g., GCC for Linux/macOS, MinGW for Windows)
- Standard C++ libraries

### Setup Instructions

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/elonekrasniqi/Caesar-Cipher.git

### Contributors:
- [Elma Shabani](https://github.com/ElmaShabani)
- [Elona Fetahu](https://github.com/ElonaFetahu)
- [Elonë Krasniqi](https://github.com/elonekrasniqi)
- [Elton Pajaziti](https://github.com/EltonPajaziti)
