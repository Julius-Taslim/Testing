//if - else if - else
#include <iostream>
using namespace std;

int main(){
    int angka;

    cout <<"Masukkan Angka = ";
    cin >>angka;

    if (angka > 80){
        cout <<"Nilai lebih besar dari 80.";
    } else if (angka >= 50){
        cout <<"Nilai berada diantara 50 sampai 80.";
    } else {
        cout <<"Nilai berada dibawah 50.";
    }
    return 0;
}