// ***
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/word-scramble/#problems

#include <iostream>
using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    string s;
    int aux = 0;

    while(getline(cin, s)){
        for(int i = 0; i < s.length(); i++){
            if(isspace(s[i]) || i == s.length()-1){
                for(int j = i; j >= aux; j--){
                    if(isspace(s[j])){

                    }else{
                        cout << s[j];
                    }
                }
                if(s[i] != ' '){

                }else{
                    cout << s[i];
                }
                aux = i;
            }
        }
        cout << "\n";
        aux = 0;

    }

    return 0;
}
