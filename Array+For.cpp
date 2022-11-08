//array + for

#include <iostream>
using namespace std;

int main(){
    int nilai[30];
    string nama[30];
    int jumlah,a;
    char konfirmasi;

    cout <<"Masukkan jumlah data siswa yang akan diinput : ";
    cin >>jumlah;

    for (a = 0; a < jumlah;a++){
        cout <<"Masukkan Data anak ke-"<<a+1<<endl;
        cout <<"Masukkan Nama : ";
        cin >> nama[a];
        cout <<"Masukkan Nilai : ";
        cin >> nilai[a];
        cout <<endl;
    }

    cout <<"\nIngin Melihat Data siswa (Y/T)? : ";
    cin >>konfirmasi;

    if (konfirmasi == 'T'||konfirmasi == 't'){
        return 0;
    } else {
    for (a = 0; a < jumlah;a++){
        cout <<"\nNilai dari "<<nama[a]<<" adalah = "<<nilai[a]<<endl;
    }
    }


}
