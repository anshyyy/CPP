#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int getmaxi(vector<int>&arr,int n){
    int i=0,maxi= INT_MIN;
    for ( i = 0; i <n; i++)
    {
        if(arr[i]>maxi){
            maxi= i+1;
        }
    }
    return maxi;
}
void solve(){ 
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
 
  deque<int> check;
        check.push_back(arr[0]);
        for(int i=1;i<n;i++){
         int front=check.front();
            if(arr[i]<=front){
                check.push_front(arr[i]);
            }
            else {
             check.push_back(arr[i]);
            }
        }
        while(check.empty()==false)
        {
         int front=check.front();
         check.pop_front();
 
            cout<<front<<" ";
        }
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