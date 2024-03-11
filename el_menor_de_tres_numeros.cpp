//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/El-menor-de-tres-numeros/#problems

#include <iostream>
using namespace std;

int main() {
    long a, b, c;

    cin >> a >> b;

    if(a > b) a = b;

    cin >> c;

    if(a > c) cout << c;
    else  cout << a;

    return 0;
}
