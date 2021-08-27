#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k;
     cin>>n>>k;
     vector<int> a(n+1);
     for1(i,n)cin>>a[i];
     int num=0,count=0;
     for(int i=k;i<=n;i++)
    {
        if(a[i]==a[i+1]) num++;
    }
    if(num+1!=n-k+1)
    {
        cout<<-1;
        return ;
    }
    else
    {
        for(int i=k;i>=1;i--)
        {
            if(a[i]!=a[i-1]) {cout<<i-1;break;}
        }
    }
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}