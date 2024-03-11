// ***
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Las-tareas-de-Progra/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m, i = 0;

    cin >> n;

    cin.clear();
    cin.ignore(INT_MAX, '\n');

    string names[n];
    while(i < n){
        cin >> names[i];
        ++i;
    }

    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cin >> m;

    i = 0;
    while(i < n){
        if(m == 0)  m = n;
        --m;
        cout << names[m] << '\n';
        ++i;
    }

}