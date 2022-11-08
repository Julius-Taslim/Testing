//Quiz Pak Septian 8 Nov 2022
#include <iostream>
using namespace std;

int main(){
    int a,jumlah_kamar,no_kamar;
    string kamar[30];
    char konfirmasi;

    cout <<"RESERVASI WISMA"<<endl;
    cout <<"Masukkan jumlah kamar = ";
    cin >> jumlah_kamar;

    for (a = 1 ; a <= jumlah_kamar ; a++){
        cout <<"Pilih No Kamar = ";
        cin >>no_kamar;// 10
        cout <<"Masukkan nama pelanggan = ";
        cin >>kamar[no_kamar - 1];// kamar[9] = Jul
    }

    cout <<"Lihat Data Pelanggan? (Y = Ya /T = Tidak) = ";
    cin >> konfirmasi;

    if (konfirmasi == 'Y'||konfirmasi == 'y' ){
        goto data;
    } else {
        goto akhir;
    }

    data:
    for (a = 1 ; a<=30 ; a++){
        if (kamar[a-1] == ""){
            cout <<"Kamar ke - "<<a<<" =  Kosong"<<endl;
        }
        else {
            cout <<"Kamar ke - "<<a<<" = "<<kamar[a-1]<<endl;
        }
    }
    akhir:

    return 0;
}