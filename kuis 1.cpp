#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Mhs
{
    int tugas,kuis,uts,uas;
}
nilai;

int main ()
{
    string nama;
    int rata;

    cout << "Masukan Nama Mahasiswa : ";
    cin >> nama;

    cout << "Nilai Tugas : ";
    cin >> nilai.tugas;
    cout << "Nilai Kuis : ";
    cin >> nilai.kuis;
    cout << "Nilai UTS : ";
    cin >> nilai.uts;
    cout << "Nilai UAs : ";
    cin >> nilai.uas;

    system("cls");

    rata = (0.1*nilai.tugas)+(0.2*nilai.kuis)+(0.3*nilai.uts)+(0.4*nilai.uas);

    if (rata>85 & rata<=100)
    {
        cout << "Halo "<<nama<<", nilai anda adalah A";
        getch();
    }

    else if (rata>70 & rata<=85)
    {
        cout << "Halo "<<nama<<", nilai anda adalah B";
        getch();
    }

    else if (rata>55 & rata<=70)
    {
        cout << "Halo "<<nama<<", nilai anda adalah C";
        getch();
    }

    else if (rata>40 & rata<=55)
    {
        cout << "Halo "<<nama<<", nilai anda adalah D";
        getch();
    }

    else if (rata>0 & rata<=40)
    {
        cout << "Halo "<<nama<<", nilai anda adalah E";
        getch();
    }


return 0;

}
