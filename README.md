# Attacking Caesar's code by learning letter frequencies from any text file.

This is a semester project developed by second-year students at the University "Hasan Prishtina" - Faculty of Electrical and Computer Engineering, in the course "Data Security" - Prof.Blerim Rexha and Asc.Mergim Hoti.

### The idea of the Project

This repository contains a C++ implementation of the Caesar Cipher decryption tool and a letter frequency analysis function.

The steps to decrypt based on frequency analysis are as follows:

1. Calculate the frequency of each letter in the encrypted text using `calculateFrequency`.
2. Determine the most common letter in the encrypted text.
3. Calculate the shift (key) required to decrypt based on the frequency of letters, assuming the most common letter corresponds to 'e' in the English alphabet.
4. Use the `decrypt` method with the calculated key to decrypt the text.

This approach uses the frequency of letters in the encrypted text to automatically find the decryption key. This makes it effective for breaking Caesar Cipher encryption even without knowing the key beforehand.
