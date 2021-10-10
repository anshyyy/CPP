#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
const char result[4] = {'+', '-', '0', '?'};
int my(int x,int y){
    return x==y?2:x<y;
}
void solve(){ 
     int x,y,z;
     cin>>x>>y>>z;
     cout<<result[my(x+z,y)==my(x,y+z)?my(x,y):3]<<endl;;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}