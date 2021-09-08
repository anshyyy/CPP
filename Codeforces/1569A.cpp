#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool isValid(string p)
{
    int n = p.length();
    int c1 = 0, c0 = 0;
     
    for(int i =0; i < n; i++)
    {
        if(p[i] == 'a')
            c0++;
        if(p[i] == 'b')
            c1++;
    }
     
    return (c0 == c1) ? true : false;
}
 
// Function to find the length of
// the longest balanced substring
int longestSub(string s)
{
    int max_len = 0;
    int id=INT_MIN,id1=INT_MAX;
    int n = s.length();
     
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(isValid(s.substr(i, j - i + 1)) && max_len < j - i + 1)
                max_len = j - i + 1;
                id1=min(id1,i+1);
                id=max(id,j+1);
        }
         
    }
    cout<<id1<<" "<<id<<endl;
    return max_len;
     
}
void solve(){ 
     int n;
     cin>>n;
     string s;
     cin>>s;
     int a=0,b=0,id=INT_MAX,id1=INT_MIN;
     int i=0,j=i+1;
     if(n==1){
         cout<<"-1 -1\n";
         return;
     }
        for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int c1=0,c2=0;
            for(int k=i;k<=j;k++) {
                c1+=s[k]=='a';
                c2+=s[k]=='b';
                if(c1 == c2)
                {
                    cout<<i+1<<" "<<j+1<<'\n';
                    goto beginn;
                }
            }
        }
        }
        cout<<-1<<" "<<-1<<'\n';
        beginn:;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}