// ***
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Palabra-palindroma/

#include <iostream>
using namespace std;

string reverse (string str) {
    string strrev = "";

    for (int i = str.length() - 1; i >= 0; i--) strrev += str[i];

    return strrev;
}

int main() {

    string s;
    cin >> s;

    string srev = reverse(s);

    if (srev == s) cout << "SI";
    else cout << "NO";

    return 0;
}