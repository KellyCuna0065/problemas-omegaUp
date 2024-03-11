//
// Created by Kelly Cuna on 10-Mar-24.
// https://omegaup.com/arena/problem/El-banco/#problems

#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, nc, p;
    int ncc[10] = {0};
    int ncp[10] = {0};
    char c;
    string s;
    string ncs[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> c;

        switch(c){
            case 'A':

                cin >> nc >> s >> p;
                if(ncp[nc-1] != 0){
                    cout << "ERROR \n";
                }else{
                    ncc[nc-1] = 1;
                    ncs[nc-1] = s;
                    ncp[nc-1] += p;
                    cout << "OK \n";
                }
                break;

            case 'B':

                cin >> nc;
                if(ncc[nc-1] != 1){
                    cout << "ERROR \n";
                }else{
                    ncc[nc-1] = 0;
                    ncp[nc-1] = 0;
                    cout << "OK \n";
                }
                break;

            case 'C':

                cin >> nc;
                if(ncc[nc-1] != 1){
                    cout << "ERROR \n";
                }else{
                    cout << ncs[nc-1] << ' ' << ncp[nc-1] << "\n";
                }
                break;

            case 'D':

                cin >> nc >> p;
                if(ncc[nc-1] != 1){
                    cout << "ERROR \n";
                }else{
                    ncp[nc-1] += p;
                    cout << ncs[nc-1] << ' ' << ncp[nc-1] << "\n";
                }
                break;

            case 'E':

                cin >> nc >> p;
                if(ncc[nc-1] != 1 || p > ncp[nc-1]){
                    cout << "ERROR \n";
                }else{
                    ncp[nc-1] -= p;
                    cout << ncs[nc-1] << ' ' << ncp[nc-1] << "\n";
                }
                break;

        }
    }

    return 0;
}
