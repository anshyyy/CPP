#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
     int n,i,sum=0,ans=0,cnt=0;
     int a[100];
     //cin>>n;
     while (cin>>n)
     {
         int a[n];
         for ( i = 0; i < n; i++)
         {
             cin>>a[i];
             sum += a[i];
         }
         
     
sum=sum/2;
sort(a,a+n);
for ( i = n-1; i >=0; i--)
{
    ans+=a[i];
    cnt++;
    if(ans>sum)break;
}
     
cout<<cnt<<endl;
     }
     return 0;
}