#include<iostream>
using namespace std;
int n;
int factorial(int a);
int factorial(int a)
{

if(a>1)
return a*factorial(a-1);
else 
return 1;
}
int main()
{
    cin >> n;
    cout << factorial(n);
    return 0;
}

