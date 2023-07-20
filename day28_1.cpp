#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k,m;
    cin >> n;
    m=n;
    for(i=0;i<n;i++)
    {
            for(k=0;k<i;k++)
        {
            cout << "*";
        }
        
        cout <<endl;
    }
    for(i=n;i>=0;i--)
    {
        
            for(k=0;k<i;k++)
        {
            cout << "*";
        }
        
        cout <<endl;
    }

    return 0;

}