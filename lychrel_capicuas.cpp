//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Lychrel-y-las-capicuas/#problems

#include <iostream>
#include <string>
using namespace std;

string reversa(string num) {
    string num2 = "";
    for (int i = num.length() - 1; i >= 0; i--) {
        num2 += num[i];
    }
    return num2;
}

string suma(string num) {
    int n = stoi(num);
    string num2 = reversa(num);

    int m = stoi(num2);
    n += m;

    return to_string(n);
}

bool palindromo(string num) {
    string num2 = reversa(num);
    return (num == num2);
}

int main() {

    string num;
    int i = 0;

    cin >> num;

    while (i < 10) {

        num = suma(num);

        if (palindromo(num)) {
            cout << num;
            return 0;
        }

        ++i;

    }

    cout << "Numero de Lychrel";

    return 0;
}
