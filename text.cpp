#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    string kata;
    int a,i,b;
    cout <<"Masukkan kata : ";
    cin >>kata;
    i = kata.size();
    for (a = 0; a <= INFINITE; a++){
        if (a <= i){
            cout << kata[a];
            Sleep (500);
        } else {
            for (a = i-1; a >= 0; a--){
                cout <<"\b \b";
            Sleep (500);
            if (a == 0){
            goto end;
            }
            }
        }
    }
    end:
    return 0;
}