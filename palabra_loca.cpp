//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/PalabraLoca/

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string n, s;
    cin >> n >> s;

    int k = stoi(n);

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            k += 100;
        }else if(s[i] >= 'b' && s[i] <= 'm'){
            k /= 2;
        }else if(s[i] == 'x'){
            break;
        }else{
            k -= 10;
        }
    }

    cout << k << "\n";

    return 0;
}
