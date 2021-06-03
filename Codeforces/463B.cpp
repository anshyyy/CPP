#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
    int n,sum=0,e=0,y,x=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>y;
        e+=x-y;
        if (e<0)
        {
            sum+=-e;
            e=0;
        }
        x=y;
    }  
    cout<<sum<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}