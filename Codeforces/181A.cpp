#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    char c[1000];
    cin>>n>>m;
    int x,y;
       x=y=0;
     for (int i = 0; i < n; i++)
     {
         cin>>c;
         for (int j = 0; j < m; j++)
         {
             if(c[j]=='*')
             x^=i,y^=j;
         }
         
     }
     cout<<x+1<<" "<<y+1<<endl;

     return 0;
}