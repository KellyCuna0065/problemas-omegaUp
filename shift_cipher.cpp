// ***
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/ShiftCipher/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    cin.clear();
    cin.ignore(INT_MAX, '\n');

    string s, num;
    int d;

    for(int i = 0; i < n; i++){
        cin >> s >> num;
        d = stoi(num);

        for(int j = 0; j < s.length(); j++){

            if((s[j] + d) > 'z'){
                s[j] = (s[j] + d) - 26;
            }else{
                s[j] += d;
            }

        }

        cout << s << "\n";
    }


    return 0;
}