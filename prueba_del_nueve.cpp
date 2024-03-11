//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/pdn/#problems

#include <iostream>
#include <string>
using namespace std;

int onedigit(string s){
    int sum = 0;

    for(int i = s.length() - 1; i >= 0; i--){
        if(sum + (s[i]-'0')  > 9) sum = (s[i]-'0') - (10 - sum) + 1;
        else  sum += (s[i]-'0');
    }

    return sum;
}

int main() {
    string a, b, c;
    int digitA, digitB, digitC, digitD;

    cin >> a >> b >> c;

    digitA = onedigit(a);
    digitB = onedigit(b);
    digitC = onedigit(c);

    digitD = onedigit(to_string(digitA * digitB));

    cout << digitC << " " << digitD << " " << (int) (digitC == digitD);

    return 0;
}
