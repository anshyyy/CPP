#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     int count = 0;
     vector<int>arr;
     string s;cin>>s;
     for (int i = 0; i <n; i++)
     {
         if(s[i]=='0'){
             arr.push_back(i+1);
         }
     }
     if(arr.empty()){
         cout<<"0\n";
         return;
     }
     int xx = arr.size();
     for (int i = 0; i < xx-1; i++)
     {
         if(abs(arr[i]-arr[i+1])==1){
             count+=2;
         }
         else if(abs(arr[i]-arr[i+1])==2){
               count++;
         }
     }
     cout<<count<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}