#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[2*n];
     loop(2*n) cin>>arr[i];
     int e=0,o=0;
     for (int i = 0; i <2*n; i++)
     {
         if(arr[i]%2==0) e++;
         else o++;
     }
     if(o==e) cout<<"Yes\n";
     else cout<<"No\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}