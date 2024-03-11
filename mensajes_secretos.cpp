//
// Created by Kelly Cuna on 08-Mar-24.
//

#include <iostream>
#include <cmath>
using namespace std;

int modulo (int a, int p) {
    int m = 1, lim = 19;

    while(pow(a, lim) > pow(2, 19)) --lim;

    while (p > lim) {
        m *= pow(a, lim);
        m %= 29;
        p -= lim;
    }
    m *= pow(a, p);
    m = (m % 29) % 29;
    return m;
}

int main() {

    int n = 0, a = 0, p = 0;
    unsigned int c = 0;

    cin >> n >> a;

    for (int i = 0; i < n; i++) {
        cin >> p;
        c = modulo(a, p);
        cout << (char)(c + 63);
    }

    return 0;
}