#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    srand(time(NULL));
    int data[100];
    int cari,i,j,l;
    int flag=0;
    int k=0;

    for (j=0;j<100;j++)
    {
        data[j]=1+rand()%100;
    }
    cout << ("Masukan data yang ingin dicari = "); cin >>cari;
    for (i=0;i<100;i++)
    {
        if(data[i] == cari)
        {
            flag=1;
            k++;
        }
    }
    if (flag==1)
    {
        cout << ("Data ada!")<<endl;
        cout << "Jumlah data = " << k;
    }
    else
        cout << ("Data tidak ada!");

    for (int m=0;m<100;m++)
    {
        cout << data[m] << endl;
    }

    return 0;
}
