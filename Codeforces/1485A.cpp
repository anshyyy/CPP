#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     ll a,b,ans=INT_MAX,count=0;
     cin>>a>>b;
     for (size_t i = 0; i*i <=a; i++)
     {
         if(b==1&&i==0) continue;
         count=i;
         ll c=a;
         while (c)
         {
             c/=(b+i);
             count++;
         }
         ans=min(ans,count);
     }
     cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}