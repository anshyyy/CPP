#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
     char a[110]; int flag;
     char b[110];
     cin>>a>>b;
     int l = strlen(a);
     int l1= strlen(b);
     for (int i = 0; i <l; i++)
     {
        for (int j = l1-1; j >= 0; j--)
        {
           if (a[i]==b[j])
           {
             flag =true;
             
           }
           else
           {
              flag=false;
              
           }
           
        }
        
     }
     if(flag==true) cout<<"YES";
     else cout<<"NO";
       
     
     return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

   