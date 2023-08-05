#include <iostream>

int main() {
   using namespace std;
   int a[100], n, i;
   int temp =0;
   cout <<"enter number of elts:\n"
   cin >> n;
   for(i=0;i<n;i++)   
   {
       cin >> a[i];
   }
for(i=0;i<n;i++)   
   {
       if ( a[i]>a[i+1])
       {
           temp = a[i];
           a[i]= a[i+1];
           a[i+1]= temp;
       }
   }
   cout << a[n];

    return 0;
}
