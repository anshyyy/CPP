#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     int sum=0;
     while (t--)
     {
         string s;
        //  sum=0;
         cin>>s;
         if(s[0]=='C'){
             sum+=6;
         }
         if (s[0]=='T')
         {
             sum+=4;
         }
         
         if (s[0]=='O')
         {
             sum+=8;
         }
         if (s[0]=='D')
         {
             sum+=12;
         }
         if (s[0]=='I')
         {
             sum+=20;
         } 
     }
     cout<<sum<<endl;
     
     return 0;
}