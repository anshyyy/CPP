#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int n,count=0;
     cin>>n;
     string s;
     cin>>s;
     for (int i = 0; i < n; i++)
     {
        if (s[i]==s[i+1])
        {
          count++;  
        }
        
     }
     cout<<count<<endl;
     return 0;
}