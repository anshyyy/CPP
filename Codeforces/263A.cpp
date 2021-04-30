#include <bits/stdc++.h>
using namespace std;
int main() {
     int input ,i,j;
     for ( i = 1; i <=5; i++)
     {
         for ( j = 1; j <= 5; j++)
         {
            cin>>input;
            if (!(input^1))
            {
                cout<<abs(i-3)+abs(j-3);
                return 0;
            }
            

         }
         
     }
     
     return 0;
}