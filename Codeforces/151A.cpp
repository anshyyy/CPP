#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k,l,c,d,p,nl,np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     k=k*l;
     nl=k/nl;
     c=c*d;
     p=p/np;
     cout<<min({nl,c,p})/n<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}