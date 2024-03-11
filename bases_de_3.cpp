//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Bases-de-3/#problems

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    vector<int> v;
    cin >> n;

    while(n != 0){
        v.push_back(n % 3);
        n /= 3;
    }

    for(int i = v.size()-1; i >= 0; i--){
        cout << v.at(i);
    }

    return 0;
}
