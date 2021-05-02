#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int n,v=0;
     cin>>n;
     while (n--)
     {
       string s;
       cin>>s;
       if (s[1]=='+')
       {
         v++;
       }
       else v--;
        
     }
     cout<<v<<endl;
     return 0;
}