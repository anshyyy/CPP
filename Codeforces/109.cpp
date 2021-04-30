#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main() {
     IOS;

     int n;
     cin>>n;
     if (n<=10)
     {
         cout<<"0";
     }
     else
     {
         if (n<=19)
         {
             cout<<"4";
         }
         else if (n==21)
         {
             cout<<"4";
         }
         
         else if (n==20)
         {
             cout<<"15";
         }
         else
         {
             cout<<"0";
         }
         
     }
     
     return 0;
}