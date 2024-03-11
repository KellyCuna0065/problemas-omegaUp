//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Matriz-Espejo/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = m-1; j >= 0; j--){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }

    return 0;
}
