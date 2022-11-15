#include <iostream>
using namespace std;
int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100],min[100][100],times[100][100], i, j,d[100][100],k;

    cout << "Masukan Jumlah Baris (between 1 and 100): ";
    cin >> r;
    cout << "Masukan Jumlah Kolom (between 1 and 100): ";
    cin >> c;
    cout << endl << "Masukan matriks pertama: " << endl;

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
            cout << "Matriks a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout << endl << "Masukan matriks kedua: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
             cout << "Matriks b" << i + 1 << j + 1 << " : ";
             cin >> b[i][j];
        }
        
        for(i = 0; i < r; ++i)
             for(j = 0; j < c; ++j){
                sum[i][j] = a[i][j] + b[i][j];
                min[i][j] = a[i][j] - b[i][j];
                d[i][j] = 0;
             }
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
                for(k = 0; k < c; ++k)
            {
                d[i][j] += a[i][k] * b[k][j];
            }


        for(i = 0; i < r; ++i)
             for(j = 0; j < c; ++j){
                
             }
        cout << endl << "Penjumlahan kedua matriks: " << endl;
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j){
                 cout << sum[i][j] << " ";
                 if(j == c - 1)
                cout << endl;
            }

        cout << endl << "Pengurangan kedua matriks: " << endl;
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j){
                  cout << min[i][j] << " ";
             if(j == c - 1)
         cout << endl;
         }

          cout << endl << "Perkalian kedua matriks: " << endl;
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j){
                  cout << d[i][j] << " ";
             if(j == c - 1)
         cout << endl;
         }

return 0;
}
