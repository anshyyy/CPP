#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n,x;
     cin>>n>>x;
     ll sum=0;
     ll sum1=0;
    for (int i = 0; i < n; i++)
    {
        ll y;cin>>y;
        sum1+=y;
        sum+=(y/x);
        if(y%x) sum++;   
    }
    ll other=sum1/x;
    if(sum1%x) other++;
     cout<<other<<" "<<sum<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}