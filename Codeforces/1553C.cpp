#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int a =0,b=0,ad=0,bd=0;
     bool flag=false;
     for (int i = 0; i <10; i++)
     {
         if(s[i]=='1'){
             if(i%2)b++;
             else a++;
         }
         else if(s[i]=='?'){
             if(i%2) bd++;
             else ad++;
         }
         if(a+ad>b+(10-i)/2){
             cout<<i+1<<endl;
             return;
         }
         if(b+bd>a+(9-i)/2){
             cout<<i+1<<endl;
             return;
         }
     }
     if(!flag)cout<<"10\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}