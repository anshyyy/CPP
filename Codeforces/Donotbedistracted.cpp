#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     while (t--)
     {
        int n;
        cin>>n;
        bool flag=true;
        string s;
        cin>>s;
     //  int l=0,r=n-1;
      for (int i = 0; i < n; i++)
      {
             if (s[i]!=s[i+1])
             {
               for (int j = i+1; j <n; j++)
               {
                  if (s[i]==s[j])
                  {
                     flag=false;
                  }
                  
               }
               
             }
             
         
         
      }
      
        if (flag)
        {
           cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
     }
     
     return 0;
}