#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n,x,t,a=0;
     cin>>n>>x>>t;
     cout<<(max(0,n-t/x)*t/x)+min(n-1,t/x-1)*(min(n,t/x)/2)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}