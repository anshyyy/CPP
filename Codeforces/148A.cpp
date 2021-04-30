/*In simpler words you will be given k, l, m, n and d as inputs. now you need to count the numbers starting from 1 and ending at d, which are divisible by atleast one of k,l,m,n;
Explanation of sample input 1 :
here d=12, so you need to count numbers from 1,2,3,.....,12 which are divisible by atleast one of (1,2,3,4). You can observe that count = 12.*/
#include <bits/stdc++.h>
using namespace std;
int main() {
     int k,l,m,n,d;
     int count=0;
     cin>>k>>l>>m>>n>>d;
     count=d;
     if (k==1||l==1||m==1||n==1)
     {
         cout<<d<<endl;
     }
     else
     {
         for (int i = 1; i <d; i++)
         {
             if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0))
             count--;
         }
         cout<<count<<endl;
     }
     
     
     return 0;
}