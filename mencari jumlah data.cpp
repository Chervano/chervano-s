#include <iostream>

using namespace std;

int main ()
{
    int isi[10] = {23,24,12,23,25,23,24,16,17,24};
    int cari,jml=0;
    int dex[10];

    cout << "Masukan Data yang ingin dicari : ";
    cin >> cari;

    for (int i=0; i<10; i++)
    {
        if (isi[i] == cari)
        {
            dex[jml]=i;
            jml=jml+1;

        }
    }
    cout << "Jumlah data : "<<jml<<endl;
    cout << "Indeks ke - ";

    for (int j=0; j<jml ; j++)
    {
            cout << dex[j]<<" ";
    }
    return 0;
}
