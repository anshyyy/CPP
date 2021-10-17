#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int p;
     cin>>p;
     vector<int>arr;
     loop(i,0,p){
         int x;
         cin>>x;
         arr.push_back(x);   
     }
     int q;
     cin>>q;
     loop(i,0,q){
         int x;
         cin>>x;
         arr.push_back(x);
     }
     sort(arr.begin(),arr.end());
     ll count =0;
     loop(i,0,arr.size()-1){
          if(arr[i]!=arr[i+1]){
             count++;
          }
     }
     if(n==count)
     cout<<"I become the guy.\n";
     else
       cout<<"Oh, my keyboard!\n";
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}