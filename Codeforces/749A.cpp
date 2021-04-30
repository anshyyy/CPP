#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int n,k,i;
     cin>>k;
     n=k/2;
     cout<<n<<endl;
     if(k%2==0)
     {
         for(i=0;i<n-1;i++){
             cout<<"2 ";
         }
         cout<<"2\n";
     }
     if(k%2==1)
     {
         for(i=0;i<n-1;i++){ cout<<"2 ";}
          cout<<"3\n";
     }

     return 0;
}