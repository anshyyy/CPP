#include <bits/stdc++.h>
using namespace std;
int main() {
     int l1,l3,i,cnt=0;
     char s1[105],s2[105],s3[105];
     cin>>s1>>s2>>s3;
     strcat(s1,s2);
     l1=strlen(s1);
     l3=strlen(s3);
     sort(s1,s1+l1);
     sort(s3,s3+l3);
     if (l1!=l3)
     {
         cout<<"NO"<<endl;
         return 0;

     }
    else
    {
        for ( i = 0; i < l1; i++){
        if(s1[i]==s3[i])
        {
            cnt++;
        }
        
    }
    }
    if(cnt==l1){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }
     return 0;
}