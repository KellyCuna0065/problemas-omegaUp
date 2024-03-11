//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Saltando-por-el-arreglo/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, cont = 0, pos = 0, aux;
    cin >> n;

    int x[n];

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    while(pos != n-1){
        pos += x[pos];
        ++cont;
    }

    cout << cont;

    return 0;
}
