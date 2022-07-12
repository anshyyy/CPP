#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     int k = n;
     int i =0;
     int j =0;
     while(k--){
        int x ;string s;
        cin>>x>>s;
        i = 0;
        while(x--){
            if(s[i] == 'U'){
                if(arr[j]==0){
                    arr[j] = 9;
                }
                else arr[j]-=1;
            }
            else{
                if(arr[j] == 9){
                    arr[j] = 0;
                }
                else arr[j] += 1;
            }
            i++;
        }
        j++;
     }
     loop(i,0,n){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}