#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int count=0;
       int p=0;
       for (int i = 1; i <=n; i++)
       {
           if(i/10==0){
               p++;
           }
          else
           {
               int m=i/10;

              count++;
           }
           
       }
       cout<<count+p<<endl;
    }
    
     return 0;
}