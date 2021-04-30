#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
 string defangIPaddr(string address) {
     string s="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                s+="[.]";
                // address.replace(i,1,"[.]");
                // i+=3;
            }
            else{
                s+=address[i];
            }
        }
        return s;
    }
int main() {
     string s;
     cin>>s;
     cout<<defangIPaddr(s); 
     return 0;
}