#include <bits/stdc++.h>
using namespace std;

int main() {
    string x,b="hello";
     int j=0,pass=0;
     cin >> x;
     for (int i = 0; i < x.size(); i++)
     {
         if (x[i]==b[j])
         {
              j++;
              pass++;

              if(pass==5){
                   break;
              }
         }
         
          
     }
     if(pass==5){
          cout<<"YES";
     }
     else{ 
          cout<<"NO";
          }

     

     return 0;
}