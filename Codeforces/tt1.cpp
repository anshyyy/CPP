#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int getMax(bool arr[],int n){
    int result=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
        count=0;
    }
        else
        {
            count++;
            result=max(result,count);
        }
        
    }
    return result;
}
int main() {
     int n;
     cin>>n;
     bool arr[10000];
     for(int i=0;i<n;i++){
         cin>>arr[i];

     }
     cout<<getMax(arr,n);
     return 0;
}