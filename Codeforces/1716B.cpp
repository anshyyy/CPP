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
    int n;cin>>n;
    vector<int>arr(n);
    loop(i,0,n){
      arr[i] = i+1;
    }
    vector<vector<int>>ans;
    int sp = 1;
    loop(i,0,n){
      ans.push_back(arr);
      if(sp>=n) break;
      else{
         swap(arr[sp],arr[0]);
         sp++;
      }
    }
    for(auto a : ans){
      for(auto i : a){
         cout<<i<<" ";
      }
      cout<<endl;
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