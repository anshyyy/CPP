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

void solve(){ 
     int n;
     cin>>n;
     int arr[n][n];
     int a = 1;
     if(n==2){
         cout<<"-1\n";
         return;
     }
     for (int i =0; i <n; i++)
     {
         arr[i][i]=a++;
     }
    for (int j = 1; j<n; j++)
     {
         for (int i = 0; i<j; i++,a+=2)
         {
             arr[i][j]=a;
             arr[j][i]=a+1;
         }
     }
    loop(i,0,n){
      loop(j,0,n){
            cout<<arr[i][j]<<" ";
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