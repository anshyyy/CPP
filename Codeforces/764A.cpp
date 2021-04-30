#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
 int n,m,z;
  int ans;
int main() {
    
     cin>>n>>m>>z;
     for(int i=0;i<z;i++)
     {
         if(i%n==0&&i%m==0)
         {
             ans++;
         }
     }
     cout<<ans;
     return 0;
}