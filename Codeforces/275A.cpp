#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
using namespace std;
void solve(){ 
     int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    cout << ((x11 + x12 + x21) % 2 == 0 ? "1" : "0") << ((x11 + x12 + x13 + x22) % 2 == 0 ? "1" : "0") << ((x12 + x13 + x23) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x11 + x21 + x22 + x31) % 2 == 0 ? "1" : "0") << ((x12 + x21 + x22 + x23 + x32) % 2 == 0 ? "1" : "0") << ((x13 + x22 + x23 + x33) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x21 + x31 + x32) % 2 == 0 ? "1" : "0") << ((x22 + x31 + x32 + x33) % 2 == 0 ? "1" : "0") << ((x23 + x32 + x33) % 2 == 0 ? "1" : "0") << endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}