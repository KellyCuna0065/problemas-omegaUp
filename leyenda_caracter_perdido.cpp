//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/La-Leyenda-del-Caracter-Perdido/#problems

#include <iostream>
using namespace std;

int main() {

    string frase, linea;
    char perdido = '\n';
    int cont[127] = {0};

    while (getline(cin, linea)) {
        for (int i = 0; i < linea.length(); i++) ++cont[(int)linea[i]];
    }

    for (int i = 32; i < 127; i++) {
        if (cont[i] == 1) {
            perdido = (char)i;
            break;
        }
    }

    if (perdido == '\n') cout << "El Caracter Perdido es un Enigma";
    else cout << perdido;

    return 0;
}
