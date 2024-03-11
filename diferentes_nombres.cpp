//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Diferentes-nombres/#problems

#include <iostream>
using namespace std;

string cambiar(string palabra) {
    return palabra.erase(0, 1) + palabra.substr(0, 1);
}

int main() {

    string nombre = "", palabra = "";

    cin >> nombre >> palabra;

    string aux = palabra;
    int len = palabra.length();

    for (int i = 0; i < len; i++) {
        aux = cambiar(aux);
        if (aux == nombre) {
            cout << "No";
            return 0;
        }
    }

    cout << "Si";

    return 0;
}