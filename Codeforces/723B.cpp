#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){ 
        ll n;
		cin>>n;
        ll te = 0;
        int a=11;
        te=n%a;
        n=(n-111*te);
        if(n>=0&&n%a==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
}
int main() {
    IOS;
int t;
cin>>t;

while(t--){
 solve(); 
}
     return 0;
}