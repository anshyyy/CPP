#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
    int n;
    cin>>n;
     vector<int> res(8,0);
      for1(i,n){
          int x;
          cin>>x;
          res[x]++;
      }
    if(res[5]==0&&res[7]==0&&res[2]>=res[4]&&res[1]==res[4]+res[6]&&res[2]+res[3]==res[4]+res[6]){
        loop(i,res[4]){
            cout<<"1 2 4\n";
        }
        res[2]-=res[4];
        loop(i,res[2]){
            cout<<"1 2 6\n";
        }
        loop(i,res[3]){
            cout<<"1 3 6\n";
        }
    }
    else cout<<"-1\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}