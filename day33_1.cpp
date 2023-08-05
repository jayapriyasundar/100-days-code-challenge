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
        ans+=(rem*rem*rem);
        temp/=10;
    }
if(ans==n)
cout << "yes";
else
cout << "no";
return 0;
}