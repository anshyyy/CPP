#include <bits/stdc++.h>
#define ll long long int
#define loop(a,n) for(int i=a;i<n;i++)
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         sort(s.begin(),s.end());
         cout<<s<<endl;
     }
     return 0;
}