#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;cin>>n;
     int arr[n],sum=0;
     loop(n){
         cin>>arr[i];
         sum+=arr[i];
     }
     if(sum==n) cout<<"0"<<endl;
     if(sum>n)cout<<abs(sum)-n<<endl;
     if(sum<n) cout<<"1"<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}