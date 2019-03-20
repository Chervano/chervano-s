#include <iostream>

using namespace std;

void sorting (int bil[], int left, int right)
{
    int tmp, pivot;
    int a = left, b = right;

    pivot = bil[(a+b)/2];

    while (a<=b)
    {
        while (bil[a]<pivot)
            a++;
        while (bil[b]>pivot)
            b--;

        if (a<=b)
        {
            tmp = bil[a];
            bil[a] = bil[b];
            bil[b] = tmp;
            a++;
            b--;
        }
    };

    if (left < b)
        sorting(bil, left, b);
    if (a < right)
        sorting(bil, a, right);
}

int main ()
{
    int i, batas, data[50];
    cout << "Masukan Banyak Data: ";
    cin >> batas;

    for (i=0;i<batas;i++)
    {
        cout << "Data ke-" <<i+1<< " : ";
        cin >> data[i];
    }

    sorting (data,0,batas-1);
    cout << "Jika Diurutkan : "<<endl;
    for (int j=0;j<batas;j++)
    {
        cout << data[j]<<" ";
    }
}
