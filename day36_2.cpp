#include<iostream>
using namespace std;

int main()
{
    int f0,f1,i,n,a;
    f0=0;f1=1;
    cin >> n;
    for(i=1;i<n;i++)
    {
        a=f0+f1;
        f0=f1;
        f1=a;
    }
cout << a;
return 0;
}