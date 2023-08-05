#include<iostream>
using namespace std;

int main()
{
    int n,i;
    bool is_prime=true;
    cin >> n;
    if(n==0||n==1)
    cout << "no";

    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
      is_prime=false;
      break;
    }  
    }
    if(is_prime)
    cout << "yes";
    else cout << "no";
   

return 0;
}