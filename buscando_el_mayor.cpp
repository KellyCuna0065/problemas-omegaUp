//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/BUSC_ENT_MAS_GRANDE/#problems

#include <iostream>
using namespace std;

int main() {
    int n, x, mayor = -1001;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (mayor < x) mayor = x;
    }

    cout << mayor;

    return 0;
}
