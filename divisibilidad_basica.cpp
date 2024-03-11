//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/Divisibilidad-basica/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string num, ultimosdigitos;
    int suma = 0, numdiv4;
    bool div2 = false;
    bool div3 = false;

    // 2 = 0, 3 = 2, 4 = 4, 5 = 6, 6 = 8
    // salida[0] = '2';
    // salida[2] = '3';
    // salida[4] = '4';
    // salida[6] = '5';
    // salida[8] = '6';
    string salida = "- - - - -";

    while (cin >> num) {

        for (int i = 0; i < num.length(); i++){
            suma += (int(num[i]) - 48);
            if (i == num.length()-2) numdiv4 += (int(num[i]) - 48) * 10;
            if (i == num.length()-1) numdiv4 += (int(num[i]) - 48);
        }

        if (num[num.length()-1] == '2' || num[num.length()-1] == '4' ||
            num[num.length()-1] == '6' || num[num.length()-1] == '8' ||
            num[num.length()-1] == '0') {
            salida[0] = '2';
            div2 = true;
        }

        if (suma % 3 == 0){
            salida[2] = '3';
            div3 = true;
        }

        if (numdiv4 == 0 || numdiv4 % 4 == 0) salida[4] = '4';

        if (num[num.length()-1] == '0' || num[num.length()-1] == '5') salida[6] = '5';

        if (div2 && div3) salida[8] = '6';

        cout << salida << "\n";
        salida = "- - - - -";

        div2 = false;
        div3 = false;
        numdiv4 = 0;
        suma = 0;
    }

    return 0;
}
