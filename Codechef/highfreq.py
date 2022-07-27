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
     vector<int>arr(n),fre(n+1,0);
     loop(i,0,n){
        cin>>arr[i];
        fre[arr[i]]++;
     }
    sort(all(fre));
    if(n==1){
        cout<<(fre[0]+1)/2<<endl;;
    } else {
        int f = fre[n-2];
        int s = fre[n-1];
        if(s>=2*f) cout<<((s+1)/2)<<endl;
        else cout<<f<<endl;
    }
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