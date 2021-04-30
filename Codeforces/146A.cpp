#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     int arr[n];
     bool flag;
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     for (int i = 0; i < n/2; i++)
     {
         if (arr[i]==arr[n-i-1])
         {
             flag =true;
         }
         else flag= false;
         
     }
     if (flag!=false)
     {
         cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }
     return 0;
}