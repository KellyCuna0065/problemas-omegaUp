//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Thanos-Sort/

#include <iostream>
using namespace std;

int th(int a[], int n){
    int m = n, i = 0;

    while(i < m){
        if(a[i] == 0){
            n /= 2;
            i = m - n;
        }else{
            ++i;
        }
    }
    return n;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, cont = 0;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0){
            if(a[i-1] > a[i]){
                a[i-1] = 0;
            }
        }
    }

    int s = th(a, n);

    cout << s;

    return 0;
}
