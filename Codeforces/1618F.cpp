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
void solve(){ 

     ll x,y;
     cin>>x>>y;
     string xx = "";
    for (int i = 63; i >= 0; i--) {
        ll k = x >> i;
        if (k & 1)
            xx+='1';
        else
            xx+='0';
    }
    string yy = "";
    for (int i = 63; i >= 0; i--) {
        ll k = y >> i;
        if (k & 1)
            yy+='1';
        else
            yy+='0';
    }
    cout<<xx<<endl;
    cout<<yy<<endl;


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