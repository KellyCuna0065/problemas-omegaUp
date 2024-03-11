//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Fracciones-de-Mixta-a-Impropia/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    b += a * c;

    for(int i = c; i > 0; i--){
        if(b % i == 0 && c % i == 0){
            b /= i;
            c /= i;
        }
    }

    cout << b << '/' << c << "\n";

    return 0;
}
