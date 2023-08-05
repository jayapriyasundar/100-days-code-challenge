#include<iostream>
using namespace std;

int main()
{
    int n,ans,rem,temp;
    cin >> n;
    temp=n;ans=0;
    while(temp>0)
    {
        int rem=temp%10;
        ans = (ans*10)+rem;
        temp/=10;
    }
cout << ans;
}