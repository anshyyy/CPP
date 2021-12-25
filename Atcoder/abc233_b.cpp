#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef unsigned long long ull;
using namespace std;
string reverse(string str, int len, int l, int r)
{
 
    // Invalid range
    if (l < 0 || r >= len || l > r)
        return str;
 
    // While there are characters to swap
    while (l < r) {
 
        // Swap(str[l], str[r])
        char c = str[l];
        str[l] = str[r];
        str[r] = c;
 
        l++;
        r--;
    }
 
    return str;
}
void solve(){ 
     ull l,r;
     cin>>l>>r;
     string s;
     cin>>s;
     long long int n = s.size();
     s=reverse(s,n,l-1,r-1);
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