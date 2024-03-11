//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Ordenando-las-letras-de-la-linea/#problems

#include <iostream>
#include <cctype>
using namespace std;

int main(){

    string s, ss = "";
    int contalpha = 0;
    int alpha[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) ++alpha[int(s[i])-97];
    }

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (alpha[contalpha] != 0) {
                ss += char(contalpha+97);
                --alpha[contalpha];
            }
            else{
                while(alpha[contalpha] == 0){
                    ++contalpha;
                }
                ss += char(contalpha+97);
                --alpha[contalpha];
            }
        }
        else {
            ss += s[i];
        }
    }

    cout << ss;

    return 0;
}
