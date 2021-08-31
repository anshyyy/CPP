#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
         int l,r;
         cin>>l>>r;
        // if(l==0&&r==0)cout<<"0\n";
        // else if(l>0&&l==r)cout<<"1\n";
        // else if(l==0&&r>0)cout<<"2\n";
        // else if(l>0&&r==0)cout<<"2\n";
        // else if((abs(l-r)==l)||abs(l-r)==r&&(l>0&&r>0))cout<<"-1\n";
        // else cout<<abs(l-r)<<endl;
        if(l==r){
            if(l==0&&r==0) cout<<"0\n";
            else cout<<"1\n";
        }
        else if((l+r)%2!=0){
            cout<<"-1\n";
        }
        else cout<<"2\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}