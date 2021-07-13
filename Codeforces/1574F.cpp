#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
bool areSame(int a[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
       m[a[i]]++;
      
    if(m.size()==1)
       return true;
    else
       return false;
}
void solve(){ 
     int n;
     cin>>n;
     int count=0;
     int arr[n];
     loop(n) cin>>arr[i];
     int temp[n];
     bool flag=true;
     while(flag){
     temp[n-1]=__gcd(arr[n-1],arr[0]);
     for (int i = 0; i <n-1; i++)
     {
         count++;
         temp[i]=__gcd(arr[i],arr[i+1])%n;
     }
         if(areSame(temp,n)) flag=false;
     }
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}