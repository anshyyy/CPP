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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
void solve(){ 
     ll n;cin>>n;
     vector<pair<ll,pair<ll,ll>>>arr(n+1);
     for (int i = 1; i <=n; i++)
     {
         int x;cin>>x;
         arr[i].first=x;
     }
     for (int i = 1; i <=n; i++)
     {
         int x;cin>>x;
         arr[i].second = x;
     }
     sort(all1(arr),sortbysec);
     for(auto i : arr){
         cout<<i.ff<<" "<<i.ss<<endl;
     }
     int i =0;
     ll sum =0;
    //  while(i<n+1){
    //       sum+= (arr[i].ff *(i-1)) + (arr[i].ss *(n-i));
    //  }
     
     
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