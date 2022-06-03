#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool isPossible(vector<int>&arr,int mid,int k){
     ll left = 0;
     ll right = 0;
     bool flag = false;
     for(int i=0;i<arr.size();i++){
          if(arr[i]-mid<=right){
               right = arr[i]+mid;
          } else {
               flag = true;
               break;
          } if (right>=k*1e9) break;
     }
     return flag;
}
void solve(){ 
     ll n,k;
     cin>>n>>k;
     vector<ll> arr(n);
     loop(i,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     ll d=0;
	for (int i = 1; i < n; ++i)  // find the max gap
	{
		d = max(d,arr[i]-arr[i-1]);
	}
	long long int x = max(arr[0],k-arr[n-1]); 
	double y = d/2.0;
	if(y >  x)
          printf("%.9f",y);
	else
		cout<<x<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}