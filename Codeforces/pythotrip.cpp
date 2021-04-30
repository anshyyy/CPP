#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
bool pythotrip(int arr[],int n,int x){
int c=x*x;
int l=0;
int r=n-1;
while(l<r){
    if (arr[l]*arr[l]+arr[r]*arr[r]==c)
    {
        return true;
    }
    else if (arr[l]*arr[l]+arr[r]*arr[r]>c)
    {
       r--;
    }
    else
    {
        l++;
    } 
}
 return false;
}
int main() {
     int arr[]={1,2,3,4,5,6};
     cout<<pythotrip(arr,6,5);
     return 0;
}