#include<iostream>
using namespace std;

int main()
{
    int temp,i,j,n,a[100],small_index,smallest;
    cout << "enter number of elements:\n";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(j=0;j<n;j++)
    {
        smallest = a[j];
        small_index=j;
        for(i=j+1;i<n;i++)
        {
            if(a[i]<smallest)
            {
                smallest=a[i];
                small_index=i;
            }
        }
        temp = a[j];
        a[j]=a[small_index];
        a[small_index]=temp;
        
    }
    for(i=0;i<n;i++)
    {
        cout << a[i] ;
    }
    return 0;
}