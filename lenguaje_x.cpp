//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/El-lenguaje-de-la-X/#problems

#include <iostream>
using namespace std;

int main() {

    string renglon;

    while (cin >> renglon) {
        for (int i = 0; i < renglon.size(); i++) {
            switch (renglon[i]) {
                case 'A': case 'E': case 'I': case 'U': case 'O':
                    cout << renglon[i];
                    i += 2;
                    break;
                default:
                    cout << renglon[i];
                    break;
            }
        }
        cout << "\n";
    }

    return 0;
}
