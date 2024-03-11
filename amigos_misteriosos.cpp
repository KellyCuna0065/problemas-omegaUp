//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Amigos-Misteriosos/#problems

#include <iostream>
#include <string>

using namespace std;

string reemplazarLetras(const string& texto) {
    string resultado;

    for (char c : texto) {
        switch (c) {
            case 'a':
                resultado += 'x';
                break;
            case 'e':
                resultado += 'w';
                break;
            case 'i':
                resultado += 'y';
                break;
            case 'o':
                resultado += 'k';
                break;
            case 'u':
                resultado += 'z';
                break;
            default:
                resultado += c;
                break;
        }
    }

    return resultado;
}

int main() {
    string cadena;

    while (getline(cin, cadena)) {
        string resultado = reemplazarLetras(cadena);
        cout << resultado << endl;
    }

    return 0;
}