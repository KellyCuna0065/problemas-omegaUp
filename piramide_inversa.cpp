//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/La-piramide-Inversa/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s;
    getline(cin, s);

    int j = 0, cont = 0, aux;

    for(int j = s.length()-1; j >= 0; j--){
        aux = j;
        while(cont < j){
            cout << " ";
            ++cont;
        }
        while(j <= s.length()-1){
            cout << s[j];
            ++j;
        }
        cout << "\n";
        j = aux;
        cont = 0;
    }

    return 0;
}
