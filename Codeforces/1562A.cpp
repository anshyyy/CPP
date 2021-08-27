#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
    int l ,r,b;
    cin >>l>>r;
 
   if(l>(r/2))
    cout<<r%l<<endl;
    else
    cout<<(r)%((r/2)+1)<<endl;

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