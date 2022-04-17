#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int r,b;
     cin>>r>>b;
     string res = "";
     if(b==1){
         for(int i = 0;i<n/2;i++){
             res+="R";
         }
         res+="B";
         for(int i = (n/2)+1;i<n;i++) res+="R";
         cout<<res<<endl;
         return;
     }
    int k = r/(b+1);
    int br = r%(b+1);
    while(r){
        int nn = k +(br>0);
        br = max(0,br-1);
        r-=nn;
        while(nn--){
             cout<<"R";
        }
        if(b>0){
            cout<<"B";
            b--;
        }
    }
    cout<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}