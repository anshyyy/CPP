#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     list<int>my{};
     int i =0,j=n-1;
     while(i<j){
         if(arr[i]<arr[j]){
            my.push_back(arr[j]);
            j--;
         }
         else if(arr[i]>arr[j]){
             my.push_front(arr[i]);
             i++;
         }
     }
     for (auto it = my.begin(); it != my.end(); ++it)
        cout << ' ' << *it;
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