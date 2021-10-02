#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,sumtime,sum=0;
     cin>>n>>sumtime;
     vector<int>mintime(n),maxtime(n);
     for (int i = 0; i <n; i++)
     {
         cin>>mintime[i]>>maxtime[i];
     }
     int sum1 = accumulate(mintime.begin(),mintime.end(),0);
     int sum2 = accumulate(maxtime.begin(),maxtime.end(),0);
     if(sum1<=sumtime&&sum2>=sumtime){
         cout<<"YES\n";
         for (int i = 0; i <n; i++)
         {
             int t = min(mintime[i]+sumtime-sum1,maxtime[i]);
             printf((i + 1 < n ? "%d " : "%d\n"), t);
             sumtime-=(t-mintime[i]);
         }
         
     }
     else cout<<"NO\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}