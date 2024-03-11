//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Sugerencias/#problems

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s, ss;
    vector<string> v;
    int n;

    cin >> n;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    for(int i = 0; i < n; i++){
        cin >> ss;
        v.push_back(ss);
    }

    cin >> s;

    for(int i = 0; i < n; i++){
        if(s.compare(0, s.length(), v.at(i), 0, s.length()) == 0){
            cout << v.at(i) << "\n";
        }
    }

    return 0;
}
