#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
     float x,n,y;
     cin>>n;
     x=(-1+sqrt(1+(8*n)))/2;
     y=(-1-sqrt(1+(8*n)))/2;

    if (floorf(x)==x||floorf(y)==y)
        cout<<"YES";
    
    else
        cout<<"NO";

     return 0;
}