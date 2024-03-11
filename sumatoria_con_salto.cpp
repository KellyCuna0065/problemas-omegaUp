//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Sumatoria-con-Salto/#problems

#include <iostream>
using namespace std;

int main() {

    long n, sum = 0, i = 1;
    int s;
    cin >> s >> n;

    while(i <= n){
        sum += i;
        i += s;
    }

    cout << sum;

    return 0;
}