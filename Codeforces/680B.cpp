#include <bits/stdc++.h>
#define ll long long int
#define loop(n) for(int i=1;i<=n;i++)
using namespace std;
int main() {
     int n ,k,sum=0;
     cin>>n>>k;
     int a[n];
     loop(n)cin>>a[i];
     int d=min(k-1,n-k);
     int i=k-d;
     int j=k+d;
     while (i<=j)
     {
         if(i==j&&a[i]==1)sum++;
         else if((a[i]==a[j])&&a[i]==1)sum+=2;
         i++;
        j--;
      }
      for(int i = k+d+1; i<=n; i++)
      {
        if(a[i]==1)sum++;  
      }
      for (int i = 1; i <k-d; i++)
      {
          if(a[i]==1)sum++;
      }
     cout<<sum<<endl;
     return 0;
}