//Nested IF
#include <iostream>
using namespace std;

int main(){
    int angka;

    cout <<"Masukkan Angka = ";
    cin >>angka;

    if (angka >= 50){
        if (angka >=80){
            cout <<"Angka yang anda masukkan diatas 80.";
        } else {
            cout <<"Angka yang anda masukkan berada di antara 50 sampai 79.";
        }
    } else {
        cout <<"Angka yang anda masukkan berada dibawah 50.";
    }
    return 0;
}
