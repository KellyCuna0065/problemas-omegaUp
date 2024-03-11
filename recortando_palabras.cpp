//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Recortando-palabras/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s, ch;
    cin >> s >> ch;
    int n = stoi(ch);

    for(int i = 0; i < n; i++){
        cout << s[i];
    }

    for(int i = s.length()-n; i <= s.length()-1; i++){
        cout << s[i];
    }

    return 0;
}
