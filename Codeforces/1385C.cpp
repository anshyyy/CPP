#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int inc(vector<int>&arr,int n){
    int count=1;
    for (int i=n-1; i >=1; i--)
    {
        if(arr[i+1]<=arr[i]){
            count++;
        }
        else break;
    }
    return count;
    
}
int dec(vector<int>&arr,int n){
    int count=1;
    for (int i =n-1; i >= 1; i--)
    {
        if(arr[i+1]>=arr[i]){
            count++;
        }
        else break;
    }
    return count;
    
}
int hill(vector<int>&arr,int n){
    int count=1;
    int i=n-1;
    for (; i>=1; i--)
    {
        if(arr[i+1]<=arr[i]){
            count++;
        }
        else break;
    }
    for (; i >=1; i--)
    {
       if(arr[i+1]>=arr[i])
         count++;
       else break;
    }
  return count;
}
bool aresame(vector<int>&arr,int n){
    for (int i = 1; i < n+1; i++)
    {
        if(arr[i]!=arr[i+1])
          return false;
    }
    return true;
    
}
void solve(){ 
   int n;
   cin>>n;
   vector<int>arr(n+1);
   for1(i,n)cin>>arr[i];
   if(is_sorted(arr.begin(),arr.end())){
       cout<<0<<endl;
       return;
   }
   if(aresame(arr,n)){
       cout<<0<<endl;
       return;
   }
   int maxi=1;
   maxi=max(maxi,inc(arr,n));
   maxi=max(maxi,dec(arr,n));
   maxi=max(maxi,hill(arr,n));
   cout<<n-maxi<<endl;  
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}