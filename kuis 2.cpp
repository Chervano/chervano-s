#include <iostream>

using namespace std;

struct Gaji
{
    int pertama, jam, total;
}
gaji;


int main()
{
    gaji.pertama = 500;
    cout << "Masukan Total Jam Kerja : ";
    cin >> gaji.jam;

    if (gaji.jam < 7)
    {
        gaji.total = gaji.jam*500;
    }

    else if (gaji.jam > 7)
    {
        gaji.total = ((gaji.jam-7)*15*gaji.pertama)+3500;
    }

    cout << "Total Gaji Harian Anda adalah : "<<gaji.total;
    return 0;
}
