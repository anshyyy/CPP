#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
         int w1,w2,x1,x2,d,M;
         cin>>w1>>w2>>x1>>x2>>M;
         d=w2-w1;
         if(d>=M*x1&&d<=M*x2){
             cout<<"1"<<endl;
         }
         else
         {
             cout<<"0"<<endl;
         }
         
     }
     return 0;
}