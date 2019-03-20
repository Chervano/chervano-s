#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main ()
{
    int temp;
    int x[10];

    cout << "10 Inputan" <<endl;
    for (int l=0;l<10;l++)
    {
        cout << "Inputan "<<l+1<<" :";
        cin >> x[l];
    }

    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (x[i]<x[j])
            {
                temp = x[j];
                x[j] = x[i];
                x[i] = temp;
            }
        }
    }

    cout << "Pengurutan : ";
    for (int k=0;k<10;k++)
    {
        cout << x[k]<<" ";
    }
}
