#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k,m;
    cin >> n;
    
    
    for(i=0;i<=n;i++)
    {
            for(k=1;k<=i;k++)
        {
            cout << char(k+64);
            
        }
        
        cout <<endl;
    }
    return 0;

}