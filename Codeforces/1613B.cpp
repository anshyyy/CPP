#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
bool ispresent(vector<int>&arr,int x){
    if(binary_search(arr.begin(),arr.end(),x)) return true;
    return false;
}
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     int i = 0,j=i+1;
     int count = 0;
     while(i<n)
     {
         int x = arr[j]%arr[i];
         if(!ispresent(arr,x)){
            cout<<arr[j]<<" "<<arr[i]<<endl;
            j++;
            count++;
            if(count==n/2) break;
         }
         else i++;
     }
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}