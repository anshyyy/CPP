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
     if(is_sorted(all(arr))){
         loop(i,0,n)cout<<arr[i]<<" ";
         cout<<endl;
         return;
     }
    //  int i =n-1,j=n-2;
    //  while(j>=0){
    //      if(arr[i]<arr[j]){
    //          swap(arr[i],arr[j]);
    //          break;
    //      }
    //      i--;
    //      j--;
    //  }
    int i =0,j=1;
    while(j<n){
        if(arr[i])
    }
     loop(i,0,n)
       cout<<arr[i]<<" ";
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