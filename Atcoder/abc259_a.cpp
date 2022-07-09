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
int num(int n){
    int c = 0;
    while(n!=0){
        c++;
        n/=10;
    }
    return c;
}
void solve(){ 
     int n;cin>>n;
     int h = n/60;
     int m = n%60;
     bool two = false;
     if(num(m)>1) two = true;
     cout<<21+h<<":";
     if(!two)cout<<"0"<<m;
     else cout<<m;

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