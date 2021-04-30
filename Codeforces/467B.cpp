#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
    int n,m,k,x,z,y,cn,count=0;
    cin>>n>>m>>k;
    int arr[m+10];
    for (int i = 0; i <=m; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i<m; i++)
    {
      x=arr[i]^arr[m];
      cn=0;
      for (int j = 0; j <=n; j++)
      {
         y=1<<j;
         z=x&y;
         if (z==y)
         {
           cn++;
         }
      }
      if(cn<=k){
         count++;
      }
    }
    cout<<count<<endl;
    
    return 0;
}