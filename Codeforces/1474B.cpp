#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
bool Prime(int n)
{
    
    if (n <= 1)
        return false;
  
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main() {
     int t;
     cin>>t;
     while (t--)
     {
         int d;
         cin>>d;
         int x=1+d;
         int a1=0;
         int a2=0;
         while (true)
         {
            if (Prime(x))
            {
               a1=x;
               break;
            }
            x++;
            
         }
         x+=d;
         while(true){
             if (Prime(x))
             {
                 a2=x;
                 break;
             }
             x++;
             
         }
         cout<<a1*a2<<endl;
     }
     
     return 0;
}