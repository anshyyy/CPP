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
int ArrayRemoval(vector<int>&arr,int k){
     int n = arr.size();
     if(n==1) return 0;
     sort(all(arr));
     int i=0,j=1;
     int ans = n;
     while(j<n){
        if(arr[j]-arr[i]>k) i++;
        else{
            ans = min(ans,n-(j-i+1));
            j++;
        }
     }
     return ans;
}
void solve(){ 
     int n,k;
     cin>>n>>k;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     cout<<ArrayRemoval(arr,k)<<endl;
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