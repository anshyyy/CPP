#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,a[1000],b[1000],ans,i,k,max=0;
     cin>>n;
     for ( i = 0; i < n; i++)
     {
         cin>>a[i]>>b[i];
     }
     k=a[0];
     for ( i = 0; i < n; i++)
     {
         ans=b[i]-a[i]+k;
         k=ans;
         if(ans>max)
            max=ans;
     }

     cout<<max;
     return 0;
}