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
     int n;cin>>n;
     int xx = 9;
     string s = "";
     if(n<10){
        cout<<n<<endl;
    } else {
        while(n>=10){
            s += to_string(xx);
            n-=xx;
            xx--;
        }
        // cout<<endl;
        // cout<<n<<" "<<xx<<endl;
         if(n<=xx)s+=to_string(n);
         else{
           while(n-xx>0){
            s+=to_string(xx);
            n-=xx;
            xx--;
           }
           if(xx!=0) s+=to_string(n);
        }
    } 
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;

}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}