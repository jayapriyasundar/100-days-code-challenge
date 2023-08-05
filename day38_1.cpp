#include<iostream>
using namespace std;
int main(){
int n,i;
i=0;
int a[32];
cin >> n;
while(n>0)
{
    a[i]=n%2;
    n=n/2;
    i++;
}
for(int j=i-1;j>=n;j--)
{
    cout << a[j];
}
return 0;
}
