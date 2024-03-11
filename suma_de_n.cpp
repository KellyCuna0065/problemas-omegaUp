//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Suma-de-N/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, s = 0;
    cin >> n;

    while(n >= 10){
        s += n % 10;
        n /= 10;
    }

    s += n;
    cout << s;

    return 0;
}
