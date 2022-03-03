#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
    ll s,a,f1,f2,b=0,c=1;
    cin>>a>>s;
    while (a>0||s>0)
    {
        f1=a%10;
        f2=s%10;
        if(f1>f2){
            if((s%100)/10==1){
                s/=10;
                f2=10+f2;
            }
            else break;
        }
        b+=(f2-f1)*c;
        c*=10;
        a/=10;
        s/=10;
    }
    if(a>0||s>0)cout<<"-1\n";
    else cout<<b<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}