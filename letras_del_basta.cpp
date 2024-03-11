//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Las-letras-del-BASTA/#problems

#include <iostream>
using namespace std;

int main() {

    int n;
    long long int pos = 0, giro = 0;
    bool clockwise = false;

    char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                       'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                       'T','U', 'V', 'W', 'X', 'Y', 'Z'};

    cin >> n;

    while (cin >> giro) {

        if (giro < 0){
            clockwise = false;
            giro *= -1;
        }
        else clockwise = true;

        giro %= n;

        if (clockwise){
            if (pos - giro < 0) pos = n - (giro - pos);
            else pos -= giro;
        }
        else{
            pos += giro;
            pos %= n;
        }

        cout << letras[pos] << "\n";
    }


    return 0;
}
