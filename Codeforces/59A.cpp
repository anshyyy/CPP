#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
     int lower=0,upper=0;
     string str;
     cin>>str;
     for (int i = 0; i < str.length(); i++)
     {
         if (str[i]>='A'&&str[i]<='Z')
         {
             upper++;
         }
         else if (str[i]>='a'&&str[i]<='z')
         {
             lower++;
         }
         
     }
     if (upper>str.length()/2)
     {
         transform(str.begin(),str.end(),str.begin(), :: toupper);
         cout<< str<<endl;
     }
     else if (lower>= str.length()/2)
     {
        transform(str.begin(),str.end(),str.begin(), :: tolower);
         cout<< str<<endl;
     }
     
     
     return 0;
}