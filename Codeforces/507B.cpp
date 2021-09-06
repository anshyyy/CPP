#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
void solve(){ 
     int r,x1,y1,x2,y2;
     double d;
     cin>>r>>x1>>y1>>x2>>y2;
     d=distance(x1,y1,x2,y2);
     cout<<ceil(d/(float)(2*r))<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}