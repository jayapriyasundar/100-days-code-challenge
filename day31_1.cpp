#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k,m;
    cin >> n;
    m=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout << "*";
        }
            for(k=0;k<i;k++)
        {
            cout << "  ";
        }
        for(j=0;j<n-i;j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n-i;j++)
        {
            cout << "*";
        }
            for(k=0;k<i;k++)
        {
            cout << "  ";
        }
        for(j=0;j<n-i;j++)
        {
            cout << "*";
        }
        cout <<endl;
    }

    return 0;

}