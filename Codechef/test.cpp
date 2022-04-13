#include <bits/stdc++.h> 
using namespace std; 
#define vi vector<int> 
#define int long long int 
#define fr(i, z, n) for (int i = z; i < n; i++) 
#define rep(i, n, z) for (int i = n - 1; i >= z; i--) 
void solve() 
{ 
  int n,x; 
  cin>>n>>x; 
  vi v(n); 
  if(n%2!=0) 
  { 
    int mid=n/2; 
    v[mid]=x; 
    fr(i,1,(n/2)+1) 
    { 
      v[mid+i]=x+i; 
      v[mid-i]=x-i; 
    } 
  } 
  else 
  { 
    int mid=n/2; 
    v[mid]=x+1; 
    v[mid-1]=x-1; 
    rep(i,mid-1,0) 
    { 
      v[i]=v[i+1]-1; 
    } 
    fr(i,mid+1,n) 
    v[i]=v[i-1]+1; 
  } 
  fr(i,0,n) 
  cout<<v[i]<<" "; 
  cout<<endl; 
} 
signed main() 
{ 
  // solve(); 
  int t; 
  cin >> t; 
  while (t--) 
  { 
    solve(); 
  } 
  return 0; 
}