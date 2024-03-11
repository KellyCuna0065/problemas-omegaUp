//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/SumasMaximas/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, k, s = 0, t = 0;

    cin >> n >> k;
    int x[n];

    for(int i = 0; i < n; i++){
        cin >> x[i];

        if(i < k){
            t += x[i];
        }else{
            t -= x[i-k];
            t += x[i];
        }

        if(i >= k-1){
            if(t > s){
                s = t;
            }
        }

    }

    cout << s << "\n";

    return 0;
}