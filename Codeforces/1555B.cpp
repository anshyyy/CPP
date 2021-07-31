#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int W,H,x1,x2,y1,y2,w,h;
     cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
     int H1,H2,W1,W2;
     H1=H-y2;
     H2=y1;
     W1=x1;
     W2=W-x2;
     int w1=x2-x1,h1=y2-y1;
     if(w1+w>W&&h1+h>H){cout<<"-1\n";return;}
     int ans=INT_MAX;
     if(w1+w<=W) ans=min(ans,min(w-x1,w-(W-x2)));
     if(ans<0) ans=0;
     if(h1+h<=H) ans=min(ans,min(h-y1,h-(H-y2)));
     if(ans<0) ans=0;
     cout<<ans<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}