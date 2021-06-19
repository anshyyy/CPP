#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;
     cin>>n;
    int arr[n]; bool flag= false;
     loop(n) cin>>arr[i];
     loop(n){
         if(arr[i]==1) 
         flag = true;
         }
    if(flag) cout<<"HARD\n";
    else cout<<"EASY\n";
}
int main() {
int t=1;
while(t--){
 solve(); 
}
     return 0;
}