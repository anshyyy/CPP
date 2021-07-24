#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     ll a=0,b=0;
     cin>>n;
    if(n%3==0){
        a=b=n/3;
    }
    else if((n-1)%3==0){
        b=(n-1)/3;
        a=b+1;
    }
    else if((n-2)%3==0){
        a=(n-2)/3;
        b=a+1;
    }
    cout<<a<<" "<<b<<endl;
     
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}