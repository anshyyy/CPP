#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){
    bool flag=false; 
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            int k=m-1-j;
            if(i+j<k){
                continue;
            }

            int a=i;
            int r=i+j;
            int a2=r-k;
            if(s[a:r+1]+s[])
        }
        
    }
    
   
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}