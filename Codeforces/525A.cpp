#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
using namespace std;
void solve(){ 
     int n,count=0;
     cin>>n;
     string s;
     cin>>s;
     int arr[26]={0};
     for(int i=0;i<s.size();i++ )
    {
        if (islower(s[i]))
        {
            arr[s[i]-'a']++ ;
           // cout<<Hash[i]<<" ";
        }
        else
        {
            if(arr[s[i]-'A']){arr[s[i]-'A']--;}
             else count++;
        }
    }
    cout<<count<<endl; 
}
int main() {
IOS
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}