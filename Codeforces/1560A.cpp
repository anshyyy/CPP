#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr;
     int i=1,count=1;
     while(count<=n){
         if(i%3!=0&&i%10!=3){
             arr.push_back(i);
             count++;
         }
         i++;
     }
     cout<<arr[arr.size()-1]<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}