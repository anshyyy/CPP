#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
vector<int>pf(int n){
    vector<int>res;
    for (int i = 2; i*i <=n; i++)
    {
        while(n%i==0){
            n/=i;
            res.push_back(i);
        }
    }
    if(n!=1)res.push_back(n);
    return res;
    
}
void solve(){ 
     int n,m;
     cin>>n>>m;
     vector<int>res=pf(n);
     loop(i,res.size()) cout<<res[i]<<" ";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}