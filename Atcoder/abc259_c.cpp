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
     string s,t;
     cin>>s>>t;
     vector<int>pos1;
     for (int i = 0; i < t.size(); i++)
     {
        int j = i;
        while(j<t.size()&&t[i]==t[j]){
            j++;
        }
        pos1.push_back(j-i);
        j--;
        i=j;
     }
     vector<int>pos2;
     for (int i = 0; i < s.size(); i++)
     {
         int j = i;
         while(j<s.size() && s[i]==s[j]) j++;
         pos2.push_back(j-i);
         j--;
         i=j;
     }
     if(pos1.size() != pos2.size()){
        cout<<"NO\n";
        return;
     }
     for (int i = 0; i < pos1.size(); i++)
     {
        if(pos1[i] == 1 || pos2[i] == 1){
            if(pos1[i]!=pos2[i]){
                cout<<"NO\n";
                return;
            }
        }
     }
     cout<<"YES\n";
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}