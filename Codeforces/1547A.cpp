#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int x1,x2,y1,y2,o1,o2;
     cin>>x1>>x2>>y1>>y2>>o1>>o2;
     int dist=abs(x1-y1)+abs(x2-y2);
     if(x1!=y1&&x2!=y2){
         cout<<dist<<endl;
     }
     else if(dist==(abs(x1-o1)+abs(x2-o2)+abs(y1-o1)+abs(y2-o2))) cout<<dist+2<<endl;
     else cout<<dist<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}