#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
bool isPerfectSquare(long double x)
{
   
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int main() {
    ll t;
    cin>>t;
    while (t--)
    {
        ll g;
        for(ll i=1;i<=2000;i++){
            cin>>g;
            if(isPerfectSquare(g)){
                cout<<"1"<<endl;
              break;
            }
            else if(g<0&&g>1000000){
                cout<<"-1"<<endl;
                break;
            }
            else
            {
                cout<<"0"<<endl;
            }
   
        }
    }
     return 0;
}