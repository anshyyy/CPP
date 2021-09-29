#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<string>arr(n);
     vector<pair<int,int>> cor;
     loop(i,n){
         cin>>arr[i];
         loop(j,n){
             if(arr[i][j]=='*'){
               cor.push_back({i,j});
         }
     }
     }
     cor.push_back(cor[0]);
     cor.push_back(cor[1]);
     if(cor[0].first==cor[1].first){
         cor[2].first = (cor[2].first+1)%n;
         cor[3].first = (cor[3].first+1)%n;
     }
     else if(cor[0].second==cor[1].second){
         cor[2].second = (cor[2].second+1)%n;
         cor[3].second = (cor[3].second+1)%n;
     }
     else{
         swap(cor[2].first,cor[3].first);
     }
     arr[cor[2].first][cor[2].second]= '*';
     arr[cor[3].first][cor[3].second]='*';
     loop(i,n){
         loop(j,n){
            cout<<arr[i][j];
         }
         cout<<endl;
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