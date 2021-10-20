#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,m,count=0;
     cin>>n;
     vector<int>a(n);
     loop(i,0,n)cin>>a[i];
     cin>>m;
     vector<int>b(m);
     loop(i,0,m)
     cin>>b[i];
     vector<bool>visited(100,0);
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             if(abs(a[i]-b[j])<=1){
                 count++;
                 b[j]=1000;
                 break;
             }
         }   
     }
     cout<<count<<endl;

     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}