#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
    char s[110];
    cin.getline(s,sizeof(s)/sizeof(s[0]),'\n');
    bool vowel=true;
    char*p=s;
    while (*p!='\0')
    {
         if (*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
         {
              if (*p=='a'||*p=='A'||*p=='e'||*p=='E'||*p=='i'||*p=='I'||*p=='o'||*p=='O'||*p=='u'||*p=='U'||*p=='y'||*p=='Y')
              {
                   vowel=true;
              }
              else
              {
                   vowel=false;
              }
              
              
         }
        p++; 
         
    }
    cout<<(vowel?"YES":"NO")<<endl;
     
     return 0;
}