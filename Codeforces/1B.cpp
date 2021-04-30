#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#include <string>
using namespace std;
long contonum(string input){
    long output(0);
    const int alphasize(26);
    for(int i=0;i<input.size();i++){
        output=alphasize*output+(input[i]-'A'+1);
    }
    return output;
}
string contoAplha(long input){
    const int Alphasize(26);
    string output(0);
    while (input>0)
    {
        char letter = 'Z';
        long inputmod=input%Alphasize;
        if(inputmod>0){letter='A'+inputmod-1;}
        else
        {
            input-=Alphasize;
        }
        input=input/Alphasize;
        output=letter+output;
    }
    return output;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
     cin>>s;
     bool coordinates(0);
     if(s[0]=='R'&&('0'<=s[1]&&s[1]<='9')&&1<s.find('C')&&s.find('C')<s.size()-1){
         coordinates=1;
     }
     if(coordinates){
         int Cpos=s.find('C');
         string rowstring=s.substr(1,Cpos-1);
         string colstring=s.substr(Cpos+1);
         long col=atol(colstring.c_str());
         cout<<contoAplha(col)<<rowstring<<endl;

     }
     else
     {
         string rowstring=" ";
         string colstring= " ";
         for(int i=0;i<s.length();i++)
         {
             if('0'<=s[i]&&s[i]<='9'){
                 colstring=s.substr(i);
                 break;
             }
             else
             {
                 rowstring+=s[i];
             }
             
         }
         cout<<"R"<<colstring<<"C"<<contonum(rowstring)<<endl;
     }
    }
     return 0;
}