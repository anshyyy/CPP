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
      ll n,l, w,ans=0,count =0,res=0;
      cin>>n>>l>>w;
      vector<ll>arr(n);
      loop(i,0,n)cin>>arr[i];
      ll low =0,h = arr[0];
      while (count<=n&&h<=l){
           if(low<h){
                if((h-low)%w!=0) ans = (h - low)/w +1;
                else ans = (h-low)/w;
                res += ans;
           }
           if(count<n-1){
              low= arr[count] + w;
              h = arr[count+1];
           }
           else if (count==n-1){
                low = arr[count]+w;
                h = l;
           }
           count++;
      }
      cout<<res<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
      return 0;
}