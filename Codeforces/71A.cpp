#include <bits/stdc++.h>
using namespace std;
int main() {
     string str;
     int n;
     cin>>n;
     while (n--)
     {
        cin>>str;
        if (str.length()<10)
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<str[0]<<str.length()-2<<str[str.length()-1];
        }  
     }
     
     return 0;
}