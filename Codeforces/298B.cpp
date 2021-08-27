#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
double distance(ll x1, ll y1, ll x2, ll y2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
void solve(){ 
    ll tm,x1,y1,e1,e2;
    string s;
    cin>>tm>>x1>>y1>>e1>>e2>>s;
    for (int i = 0; i <tm; i++)
    {
        if(s[i]=='S'){
            ll x=x1,y=y1-1;
            double a=distance(x,y,e1,e2);
            double b=distance(x1,y1,e1,e2);
             if(a<b){
                 x1=x;
                 y1=y;
             }
        }
        if(s[i]=='W'){
            ll x=x1-1,y=y1;
            double a=distance(x,y,e1,e2);
            double b=distance(x1,y1,e1,e2);
             if(a<b){
                 x1=x;
                 y1=y;
             }
        }
        if(s[i]=='E'){
            ll x=x1+1,y=y1;
            double a=distance(x,y,e1,e2);
            double b=distance(x1,y1,e1,e2);
             if(a<b){
                 x1=x;
                 y1=y;
             }
        }
        if(s[i]=='N'){
            ll x=x1,y=y1+1;
            double a=distance(x,y,e1,e2);
            double b=distance(x1,y1,e1,e2);
             if(a<b){
                 x1=x;
                 y1=y;
             }
        }
        if(x1==e1&&y1==e2){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"-1\n"<<endl;
    
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}