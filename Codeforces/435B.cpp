#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int k,id;
     string s;
     cin>>s>>k;
     int i=0;
    for (int i = 0; i < s.length(); i++)
    {
        char c=s[i];
        id=-1;
        for (int j = i+1; j <s.length(); j++)
        {
            if(c<s[j]){
                if(k>=(j-i)){
                    c=s[j],id=j;
                }
            }
        }
        if(id!=-1){
            for (int j = id; j>i;j--)
            {
                swap(s[j],s[j-1]);
            }
            k-=id-i;
            
        }
        
    }
    
     cout<<s<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}