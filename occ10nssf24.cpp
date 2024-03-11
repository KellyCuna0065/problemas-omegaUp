//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/occ10nssf24/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int min = 97 + (n / 2), max = 97 + (n / 2) + 1;

    for(int i = 0; i < (n / 2) + 1; i++){
        for(int j = 97; j < 97 + n; j++){
            if(j < min){
                cout << ' ';
            }else if(j >= max){

            }else{
                cout << (char)j;
            }
        }
        cout << "\n";
        --min;
        ++max;
    }

    return 0;
}
