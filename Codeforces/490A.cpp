#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n];
     for1(i,n) cin>>arr[i];
    vector<int> v1,v2,v3;
    for (int i = 1; i <=n; i++)
    {
         if(arr[i]==1){
              v1.push_back(i);
         }
         else if(arr[i]==2){
              v2.push_back(i);
         }
         else{
              v3.push_back(i);
         }
    }
    int mini=min({v1.size(),v2.size(),v3.size()});
    cout<<mini<<endl;
    for (int i = 0; i < mini; i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
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