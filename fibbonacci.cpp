#include <iostream>

using namespace std;

int main()
{
    int i,jum[50],n;
    jum[0]=0;
    jum[1]=1;
    cout<<"Membuat Deret Fibonacci\n";
    cout<<"Masukkan nilai batas deret: ";
    cin>>n;
    cout<<endl;


    for(i=2; i<n; i++)
    {
        jum[i]=jum[i-2]+jum[i-1];
    }

    cout<<"Bilangannya adalah: ";
    for (i=0; i<n; i++)
    {
        cout << jum[i] << " ";
    }
    cout <<endl;
    return 0;
}
