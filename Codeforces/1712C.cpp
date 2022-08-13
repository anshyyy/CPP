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
     map<int,vector<int>>mp;
     loop(i,0,n){
        cin>>arr[i];
        mp[arr[i]].push_back(i);
     }
     if(is_sorted(all(arr))){
        cout<<0<<endl;
        return;
     }
     int ans = 0;
     int i;
     for (i = n-1; i >=0; i--)
     {
           int x = arr[i];
           auto ar = mp[x];
           auto id = lower_bound(all(ar),i) - ar.begin();
           if(id==0){}
            else{
            if(ar[id]==arr[id-1]){}
            else break;
           }
     }
     cout<<i<<endl;
     unordered_set<int>s;
     loop(j,0,i+1)s.insert(arr[j]);
     if(s.empty()){            
        cout<<n-1<<endl;
        return;
     }
     cout<<s.size()<<endl;
    
     
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