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
    vector<pair<int,int>>arr(n);
    for (int i = 0; i <n; i++)
    {
       int x;cin>>x;
       arr[i]={x,i+1};
    }
    loop(i,0,n)cout<<arr[i].ff<<" "<<arr[i].ss<<endl;
    sort(all(arr));
    loop(i,0,n)cout<<arr[i].ff<<" "<<arr[i].ss<<endl;
    cout<<arr[1].ss<<" "<<arr[0].ss<<endl;
    
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
    return 0;
}