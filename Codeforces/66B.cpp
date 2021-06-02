#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
     int n,count=0,max=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++) cin>>arr[i];
     for (int i = 0; i <n; i++)
     {
         count=0;
         if (i==0)
         {
             for (int j = i+1; j <n; j++)
             {
                 if(arr[j]<=arr[j-1]) count++;
                 else break;
             }
             if(max<count+1)
               max=count+1;

               count=0;
         }
         else if (i==n-1)
         {
             for (int j =i-1; j >=0; j--)
             {
                   if(arr[j]<=arr[j+1]) count++;
                 else break;
             }
             if(max<count+1)
               max=count+1;

               count=0;   
         }
         else {
             
             for (int j =i+1; j<n; j++)
             {
                   if(arr[j]<=arr[j-1]) count++;
                 else break;
             }
             for (int j =i-1; j >=0; j--)
             {
                   if(arr[j]<=arr[j+1]) count++;
                 else break;
             }
             if(max<count+1)
               max=count+1;
         }
         
     }

     cout<<max<<endl;
     
     return 0;
}