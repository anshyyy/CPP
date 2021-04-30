#include <bits/stdc++.h>
using namespace std;
int main() {
     int digit[55];
     int n,i,k;
     string s;
     cin>>n>>s;
     for (int i = 0; i < n; i++)
     {
        digit[i]=s[i]-'0';
     }
     int len=n/2;
     bool flag=false;
     int s1=0,s2=0;
     for ( i = 0,k=len; i < len; k++, i++)
     {
         if(digit[i]!=4&&digit[i]!=7){
             flag=true;
             break;
         }
         if (digit[k]!=4&&digit[k]!=7)
         {
             flag=true;
             break;
         } 
     
     s1+=digit[i];
     s2+=digit[k];
     }
if(flag==false&&s1==s2){
    cout<<"YES";
}
else
{
    cout<<"NO";
}
cout<<endl;
     return 0;
}