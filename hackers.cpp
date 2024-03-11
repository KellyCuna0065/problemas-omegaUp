//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Hackers_cpp/#problems

#include <iostream>
using namespace std;

int inv(int n){
    int nn = 0;
    while(n > 0){
        nn = (nn * 10) + (n % 10);
        n /= 10;
    }
    return nn;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, x, y, a, b, s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        a = inv(x);
        b = inv(y);
        s = a + b;
        s = inv(s);
        cout << s << "\n";
    }

    return 0;
}


