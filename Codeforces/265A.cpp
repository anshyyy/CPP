#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s,t;
     cin>>s>>t;
     int count=0;
     for (int j = 0; j < t.size(); ++j)
         {
             if(s[count]==t[j]){
                count+=1;
             }
         }
     cout<<count+1<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}