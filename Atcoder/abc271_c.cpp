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
void printvec(vector<ll>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
void solve(){ 
    int n;cin>>n;
    vector<bool> v(n+2, false);
    vector<int>arr(n);
    ll sold = 0;
    loop(i,0,n){
        cin>>arr[i];
        if(arr[i]>=n+2) sold++;
        else if(v[arr[i]]) sold++;
        else v[arr[i]] = true;
    }
    for (int i = 0; i < n+2; i++)
    {
        cout<<i<<" "<<v[i]<<endl;
    }
    
    ll l = 1;
    ll r = n+1;
    while (true)
    {
          while(v[l])l++;
          while(r!=0 && !v[r])r--;
          if(sold>=2){
              sold-=2;
              v[l]=true;
          } else{
            if(l>=r) break;
            v[r]=false;
            sold++;
          }
    }
    cout<<l-1<<endl;
    
    for (int i = 0; i < n+2; i++)
    {
        cout<<i<<" "<<v[i]<<endl;
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