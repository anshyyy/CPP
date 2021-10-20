#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int k,n,m;
     cin>>k>>n>>m;
     vector<int>a(n),b(m),arr;
     loop(i,0,n)cin>>a[i];
     loop(i,0,m)cin>>b[i];
     int i =0,j=0,count=k;
     while(i!=n||j!=m){
         if(a[i]==0&&i!=n){
             arr.push_back(0);
             count++;
             i++;
         }
         else if(b[j]==0&&j!=m){
             arr.push_back(0);
             count++;
             j++;
         }
         else if(b[j]<=count&&j!=m){
             arr.push_back(b[j++]);
         }
         else if(a[i]<=count&&i!=n){
           arr.push_back(a[i++]);
         }
        else{
            cout<<"-1\n";
            return;
        }
     }

     loop(i,0,arr.size())cout<<arr[i]<<" ";
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