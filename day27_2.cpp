#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k,m;
    cin >> n;
    m=n;
    for(i=n;i>=0;i--)
    {
        for(j=0;j<n-i;j++)
        {
            cout << " ";
        }
            for(k=0;k<2*i-1;k++)
        {
            cout << "*";
        }
        
        cout <<endl;
    }
    return 0;

}