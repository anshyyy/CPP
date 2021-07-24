#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool ans[26];
void solve(){ 
     string s,r;
     cin>>s;
     int n=s.size();
      memset(ans,0,sizeof(ans));
    for (int i = 0; i <n; i++)
    {
       int j=i;
       while(j+1<n&&s[i]==s[j+1])
           j++;
       if((j-i)%2==0){
          ans[s[i]-'a']=true;
       }
       i=j;
    }
     loop(i,26){
         if(ans[i])
          cout<<char('a'+i);
          }
               cout<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}