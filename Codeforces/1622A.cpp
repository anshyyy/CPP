#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
    int arr[3];
    loop(i,0,3)cin>>arr[i];
    sort(arr,arr+3);
    int a = arr[0],b=arr[1],c=arr[2];
    int s = a+b+c;
    if(s%2==0){
        if(a+b==c||a==b||b==c||a==c){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else cout<<"NO\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}