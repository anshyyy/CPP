#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     while (t--)
     {
         int n,k;
         cin>>n>>k;
         vector<int> a(n);
         vector<int> b(n);
         for (int i = 0; i <n; i++)
         {
             cin>>a[i];
         }
          for (int i = 0; i <n; i++)
         {
             cin>>b[i];
         }
         sort(a.begin(),a.end());
          sort(b.rbegin(),b.rend());
          int ans=0;
          for (int i = 0; i <n; i++)
          {
              if (i<k)
              {
                 ans+=max(a[i],b[i]);
              }
              else ans+=a[i];
              
          }
          cout<<ans<<endl;

         
     }
     
     return 0;
}