#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]>='A'&& a[i]<='Z')
        {
            a[i]+=32;
        }
        if (b[i]>='A'&&b[i]<='Z')
        {
            b[i]+=32;
        }
        
    }
    if(a<b) cout<<"-1";
    else if(a>b)cout<< "1";
    else cout<<"0";


     return 0;
}