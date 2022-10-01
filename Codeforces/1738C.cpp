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
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
ll rec(ll dp[101][101][2], ll even,ll odd, ll curr)
{
    if(odd==0)
        return curr;
    if(even==0)
    {
        return (curr+(odd+1)/2)%2;
    }
    if(dp[even][odd][curr]!=-1)
        return dp[even][odd][curr];
    // choosing odd for Alice
    ll ans1=rec(dp,even-1,odd-1,(curr+1)%2);
    if(odd>1)
    {
        ans1=ans1|rec(dp,even,odd-2,(curr+1)%2);
    }
    // choosing even for Alice
    ll ans2=rec(dp,even-1,odd-1,(curr)%2);
    if(even>1)
    {
        ans2=ans2|rec(dp,even-2,odd,(curr)%2);
    }
    ll ans=ans1&ans2;
    return dp[even][odd][curr]=ans;
}
// --------------------------------------------------------------
 
void solve()
{
    ll t;
    cin>>t;
    ll count=0;
    ll dp[101][101][2];
    loop(i,0,101)
    {
        loop(j,0,101)
        {
            dp[i][j][0]=-1;
            dp[i][j][1]=-1;
        }
    }
    // even odd -> 0 Alice wins
    while(t--)
    {
        count++;
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll even=0,odd=0;
        loop(i,0,n)
        {
            cin>>a[i];
            a[i]%2==0?even++:odd++;
        }
        // cout<<odd<<" "<<even<<endl;
        // dp[0][0]=0;
        // dp[1][0]=0;
        // dp[0][1]=1;
        if(rec(dp,even,odd,0))
            cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return;
}
int main() {
IOS;


 solve(); 

     return 0;
}