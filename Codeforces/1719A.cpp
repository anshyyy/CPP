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
     ll n,m;
     cin>>n>>m;
     n--;
     m--;
     if(n%2==0 && m%2==0){
           cout<<"Tonya\n";
     }
     else if(n%2!=0 && m%2!=0){
          cout<<"Tonya\n";
     }
     else if(n%2==0&&m%2!=0){
        cout<<"Burenka\n";
     }
     else if (n%2!=0&&m%2==0){
        cout<<"Burenka\n";
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