#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int a, n,maxi=0,arr[1008]={};
     cin>>n;
     set<ll>s;
    loop(i,n){
        cin>>a;
        s.insert(a);
        arr[a]++;
        maxi=max(maxi,arr[a]);
    }
    cout<<maxi<<" "<<s.size()<<endl;
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}