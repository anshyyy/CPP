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
     ll n,cnt=0;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     if(all_of(all(arr),[&](int i){return i==arr[n-1];})){
         cout<<"0\n";
         return;
     }
     ll i = n-1;
    while(i >=0)
     {
         while(i>=0&&arr[i]==arr[n-1]) i--;
        if(i==-1)break;
        ll len =n-1-i;
        i = i - len;
        cnt++;
     }
     cout<<cnt<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}