#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool Same(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}
int uniq(string str) {

	int n=str.size();
    unordered_set<char> s;
    for (int i = 0; i <n; i++)
    {
        s.insert(str[i]);
    }
    return s.size();
}
void solve(){ 

     string s;
     cin>>s;
     int temp=0,sum=0;
     if(s.size()<2){
         temp=0;
     }
     else{
unordered_map<char, int> d;
  for(char i : s)
  {
    d[i]++;
  }
  for (auto x:d)
  {
      if(x.second>2){
          temp+=2;;
      }
      else{
        temp=temp+x.second;
      }
  }
  sum=temp/2;
     }
  cout<<sum<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}