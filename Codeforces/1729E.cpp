#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(ll i=a;i<n;i++)
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
void solve(){ 
    ll a,b;
   loop(i,1,8)
   loop(j,i+1,8){
         cout << "? " << i << ' ' << j << endl;
         cin >> a;
         cout << "? " << j << ' ' << i << endl;
         cin >> b;
         if(a==-1) {
            cout << "! " << max(i,j)-1 << endl;
            return ;
         }
         if(a!=b) {
            cout << "! " << a+b << endl;
            return;
         }
      }
}
signed main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}