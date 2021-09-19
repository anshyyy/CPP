#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,res=0;
     cin>>n;
     map<int,int>mp;
     for (int i = 0; i <n; i++)
     {
        int x;
        cin>>x;
        x-=i;
        res+=mp[x];
        cout<<res<<endl;
        mp[x]++;
        cout<<mp[x]<<endl;
     }
     cout<<res<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}