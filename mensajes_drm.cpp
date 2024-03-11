//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Mensajes-DRM/#problems

#include <iostream>
using namespace std;

int rotate(char ch, int n){
    if(ch + n > 90)  return (ch + n) - 26;
    else  return ch + n;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    string s, s1, s2;
    int sum1 = 0, sum2 = 0;
    cin >> s;

    s1 = s.substr(0, s.length()/2);
    s2 = s.substr(s.length()/2, s.length()/2);

    for(int i = 0; i < s1.length(); i++){
        sum1 += s1[i] - 65;
        sum2 += s2[i] - 65;
    }

    for(int i = 0; i < s1.length(); i++){
        s1[i] = rotate(s1[i], (sum1 % 26));
        s2[i] = rotate(s2[i], (sum2 % 26));
    }

    for(int i = 0; i < s1.length(); i++){
        s1[i] = rotate(s1[i], (s2[i] - 65));
    }

    cout << s1;

    return 0;
}
