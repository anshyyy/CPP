#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n),one,zero,b(n);
     map<int,int>idx;
     loop(i,0,n){
         cin>>arr[i];
         b[i]=arr[i];
         idx[arr[i]]=i;
     }
     string s;
     cin>>s;
     for (int i = 0; i < n; i++)
     {
         if(s[i]=='0'){
             zero.push_back(arr[i]);
         }
         else one.push_back(arr[i]);
     }
     sort(zero.begin(),zero.end(),greater<int>());
     sort(one.begin(),one.end(),greater<int>());
     sort(arr.begin(),arr.end(),greater<int>());
     int i;
     for ( i = 0; i < one.size(); i++)
     {
         b[idx[one[i]]]=arr[i];
     }
     for (int j = 0; j < zero.size(); j++)
     {
         b[idx[zero[j]]]=arr[i];
         i++;
     }
     loop(i,0,n)cout<<b[i]<<" ";
     cout<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}