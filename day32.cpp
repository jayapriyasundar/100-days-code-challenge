#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k,m;
    cin >> n;
    m=(n*2)-1;
    int r[m][m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(i-m/2)>abs(j-m/2))
            r[i][j]=abs(i-m/2)+1;
            else
            r[i][j]=abs(j-m/2)+1;
        }
    }  
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << r[i][j] << " ";
            
        }
        cout <<endl;
    }  

    return 0;

}