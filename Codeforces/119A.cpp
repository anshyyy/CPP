#include <bits/stdc++.h>
using namespace std;
int GCD(int x, int y)
{
     for (int i = x; i > 0; i--) {
        if (x % i == 0 && y % i == 0) {
            return i;
        }
    }
  return 0;
}

int main() {
     int a,b,n;
     int x=0,y=0;
     cin>>a>>b>>n;
    while (n>=0)
    {
        x=GCD(a,n);
        n-=x;
        if(n==0)
        {
            cout<<0<<endl;
            break;
        }
        y=GCD(b,n);
        n-=y;
        if (n==0)
        {
            cout<<1<<endl;
            break;
        }   
    }
     return 0;
}