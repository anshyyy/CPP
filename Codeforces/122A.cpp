#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     bool flag=0;
     int arr[13]={4,7,47,77,74,44,444,447,474,477,777,774,744};
     for (int i = 0; i < 13; i++)
     {
         if (n%arr[i]==0)
         {
            flag=true;
         }
         
     }
     if(flag)cout<<"YES";
     else cout<<"NO";
     
     return 0;
}