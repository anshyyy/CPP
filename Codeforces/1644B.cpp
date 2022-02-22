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
bool check(vector<int>&arr){
    int n = arr.size();
    for(int i = 2;i<n;i++){
       if(arr[i-2]+arr[i-1]==arr[i])
          return false;
    }
    return true;
}
void printArr(vector<int>&arr){
    for(int i = 0;i<arr.size();i++)
      cout<<arr[i]<<" ";
    cout<<endl;
}
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     int w = n;
     loop(i,0,n) arr[n-i-1]=i+1;
     for(int i = 0;i<n;i++){
        printArr(arr);
        swap(arr[0],arr[i+1]);
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