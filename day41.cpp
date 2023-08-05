#include<iostream>
using namespace std;

int main()
{
    int temp,i,j,n,a[100];
    cout << "enter number of elements:\n";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(i=1;j<n;j++)
    {
        for(j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else
            break;
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout << a[i] ;
    }
    return 0;
}