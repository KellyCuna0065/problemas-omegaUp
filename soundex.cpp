// ***
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Soundex/#problems

#include <iostream>
#include <algorithm>
using namespace std;

char alfabetoSoundex[26] ={'0', '1', '2', '3', '0', '1', '2', '0', '0', '2', '2', '4', '5', '5', '0', '1', '2', '6', '2', '3', '0', '1', '0', '2', '0', '2'};

int main() {

    string palabra, soundex;

    while (getline(cin, palabra)) {
        soundex = "";

        for (int i = 1; i <= palabra.length(); i++) {
            soundex += alfabetoSoundex[palabra[i-1]-65];
            while (alfabetoSoundex[palabra[i-1]-65] == alfabetoSoundex[palabra[i]-65]) ++i;
        }

        soundex.erase(remove(soundex.begin(), soundex.end(), '0'), soundex.end());

        cout << soundex << "\n";
    }

    return 0;
}

