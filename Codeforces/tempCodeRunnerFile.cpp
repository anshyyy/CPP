#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,count=0;
     cin>>n;
     pair<int,int>arr[n];
     map<int,int>mp;
     loop(i,n){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        arr[i]=make_pair(b,a);

     }
     
     for (int i = 0; i <n; i++)
     {
       if(arr[i].second!=arr[i].first && mp[arr[i].first]>0) count++;  
     }
     cout<<n-count<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}