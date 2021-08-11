#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int l=INT_MAX,r=INT_MIN;
     vector<pair<int,int>> arr(n);
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
        l=min(l,arr[i].first);
        r=max(r,arr[i].second);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i].first==l&&arr[i].second==r){
            cout<<i+1<<" ";
            return;
        }
    }
    cout<<-1<<endl;
    
    
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}