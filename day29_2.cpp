#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k,m;
    cin >> n;
    int a=1;
    
    for(i=0;i<=n;i++)
    {
            for(k=1;k<=i;k++)
        {
            cout << a <<" ";
            a++;
        }
        
        cout <<endl;
    }
    return 0;

}