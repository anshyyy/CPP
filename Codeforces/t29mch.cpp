#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int R,O,C;
     cin>>R>>O>>C;
     if (O<=20)
     {
         O=20-O;
         if (R<O*6*6+C)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO";
         }
     }
     
     return 0;
}