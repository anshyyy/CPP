#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,count=0;
     cin>>n;
    set<int>s;
    for (int i = 1; i <=n; i++)
    {
        int x;
        cin>>x;
        if(s.count(x)) x++;
        s.insert(x);
    }
    cout<<s.size()<<endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}