#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<i/2;j++)
            cout <<"01";
          
        }
        
        else 
        {
            cout << "1";
            for(k=0;k<i/2;k++)
            cout <<"01";
        }
        cout <<endl;

    }
    return 0;

}