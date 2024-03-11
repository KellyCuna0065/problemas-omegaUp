//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Dibujando-un-corazon/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    char s;
    cin >> s;

    int a = 3, b = 19, c = 8, d = 15;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 23; j++){
            if(j < a){
                cout << ' ';
            }else if(j > c && j < d){
                cout << ' ';
            }else if(j > d && j <= b){
                cout << s;
            }else if(j > b){

            }else{
                cout << s;
            }
        }
        --a;
        ++b;
        ++c;
        --d;
        cout << "\n";
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 23; j++){
            cout << s;
        }
        cout << "\n";
    }

    a = 1; b = 21;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 23; j++){
            if(j < a){
                cout << ' ';
            }else if(j > b){

            }else{
                cout << s;
            }
        }
        ++a;
        --b;
        cout << "\n";
    }

    return 0;
}
