//switch-case
#include <iostream>
using namespace std;

int main (){
    int menu;

    cout <<"Pilih menu (1-4) : ";
    cin >>menu;

    switch (menu){

    case 1 : 
    cout <<"Nasi Goreng Spesial";
    break;

    case 2 : 
    cout <<"Ayam goreng";
    break;

    case 3 :
    cout <<"Capcay";
    break;

    case 4:
    cout <<"Soto Ayam";
    break;

    default:
    cout <<"Invalid.";
    }
    return 0;
}