#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int> a(2*n);
     for(int &x:a){
         cin>>x;
     }
     sort(a.begin(),a.end());
     int f=0;
     int l=2*n-1;
     for (int i = 0; i < n; i++)
     {
         cout<<a[f]<<" "<<a[l]<<" ";
         f++;
         l--;
     }
     cout<<endl;

}
int main() {
int t;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}