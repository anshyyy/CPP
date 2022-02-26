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
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     int lastz =  -1;
     for (int i =n-1;i>=0; i--)
     {
         if(arr[i]==0){
             lastz = i;
             break;
         }
     }
     int i = 0;
     for(i = 0; i <=lastz; i++)
     {
         cout<<i+1<<" ";
     }
     cout<<n+1<<" ";
     while(i<n) cout<<(i++)+1<<" ";
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