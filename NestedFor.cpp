//Nested FOR
#include <iostream>
using namespace std;

int main(){
    int sisi,i,a;

    cout <<"Masukkan panjang sisi dari persegi = ";
    cin >> sisi;
    for (i = 1; i <= sisi; i++){
        for (a = 1; a <= sisi; a++){
        cout << " * ";
        }
        cout <<endl;
    }
    return 0;
}