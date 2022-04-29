#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,s;
     cin>>n>>s;
     string s1,s2;
     int sum1 = s,sum2=s;
     if((s==0&&n>1)||s>n*9){
         cout<<"-1 -1\n";
         return;
     }
     for (int i = 1; i <=n; i++)
     {
         for (int dig = 0; dig <=9; dig++)
         {
              if(dig==0 && i==1 &&n>1) continue;
              if(sum1-dig>=0 && sum1-dig<=9*(n-i)){
                  sum1-=dig;
                  s1.push_back('0'+dig);
                  break;
              }
         }
         for (int dig = 9; dig >=0; dig--)
         {
              if(sum2-dig>=0 && sum2-dig<=9*(n-i)){
                  sum2-=dig;
                  s2.push_back('0'+dig);
                  break;
              }
         }
     }
     cout<<s1<<" "<<s2<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}