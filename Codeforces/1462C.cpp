#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int getsum(int n){
    int sum=0;
    while (n!=0)
    {
       sum++;
       n=n/10;
    }
    return sum;
}
bool unique_um(uintmax_t number)
{
    string s = to_string(number);
    unordered_set<char>se;
    for(int i =0;i<s.size();i++){
        se.insert(s[i]);
    }
    if (getsum(number)==se.size()){
        return true;
    }
     return false;
 }
void solve(){ 
     int x;
     cin>>x;
    //  int n=(x%9+1)*pow(10,(x/9))-1;
     string s ="";

    for (int i = 9; i >= 1; i--)
    {
       if(x<=9&&x<=i){
         s+=to_string(x);
         x=0;
         break;
       }
       else{
           s+=to_string(i);
           x-=i;
       }
    }
    if(x){
        cout<<-1<<endl;
        return;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;;
    
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}