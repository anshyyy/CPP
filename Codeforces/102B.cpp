#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int count=0;
    int n=s.size();
    while (n>1)
    {
     int sum=0;
     loop(n){
         sum+=s[i]-'0';
         cout<<sum<<endl;
     }
     s=to_string(sum);
     n=s.length();
     count++;
    }
    
   cout<<count<<endl; 
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}