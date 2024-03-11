//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Automated-Checking-Machine/#problems

#include <iostream>
using namespace std;

int main() {
    int x[5];
    int y;

    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }

    for(int i = 0; i < 5; i++){
        cin >> y;
        if(y == x[i]){
            cout << "N";
            return 0;
        }
    }

    cout << "Y";

    return 0;
}
