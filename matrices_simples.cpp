//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Matrices-Simples/#problems

#include <iostream>
using namespace std;

int main() {
    int n, m, s;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            if(i == 0){
                s = a[i][j];
            }else{
                if(s > a[i][j]) s = a[i][j];
            }
        }
        cout << s << ' ';
    }

    return 0;
}