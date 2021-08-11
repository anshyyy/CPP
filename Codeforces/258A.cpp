#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool alSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}
void MaxRemoval(string s)
{
	bool flag = false;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == '0' && flag == false) {
			flag = true;
			continue;
		}
		else
			cout << s[i];
	}
}
void solve(){ 
    string s;
    cin>>s;
    if(alSame(s)){
        cout<<s.substr(1,s.size());
    }
    else MaxRemoval(s); 
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}