//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/El-entero-solitario/#problems

#include <iostream>
#include<map>
using namespace std;

int main() {

    int num;
    map<int, int> par;

    while (cin >> num) {
        if (par.find(num) != par.end()) {
            ++par[num];
        }
        else{
            par.insert({num, 1});
        }
    }

    for (auto i : par) {
        if (i.second % 2 == 1){
            cout << i.first;
            break;
        }
    }

    return 0;
}