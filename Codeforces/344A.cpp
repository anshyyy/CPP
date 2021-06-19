#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
    int n;cin>>n; int cnt=1;
    int arr[n];
     loop(n){
        cin>>arr[i]; 
     }
     loop(n-1){
         if(arr[i]!=arr[i+1]) cnt++;
     }
     cout<<cnt<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}