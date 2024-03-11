//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/ExamBidi3/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                cout << "X";
            }else if(i % 2 == 0){
                cout << "o";
            }else{
                cout << "a";
            }
        }
        cout << "\n";
    }

    return 0;
}
