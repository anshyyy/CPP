#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n=s.size();
    //  int i=1,j=i+1;
    //  cout<<s[0];
    //  while(i<n-1){
    //      if(s[i]==s[j]){
    //          cout<<s[i];
    //          i++;
    //          j++;
    //      }
    //      else{i++,j++;}
    //  }
    for (int i = 0; i <n; i+=2)
    {
        if(i%2==0) cout<<s[i];
    }
      cout<<s[n-1]<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}