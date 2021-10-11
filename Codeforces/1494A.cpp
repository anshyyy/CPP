#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
bool areBracketsBalanced(string expr)
{ 
    stack<char> s;
    char x;
 
    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }
 
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;
 
        switch (expr[i]) {
        case ')':
             
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}
void solve(){ 
     string s;
     cin>>s;
     int n=s.size();
     int p=1,q=1,r=0;
     char open = s[0];
     char close = s[n-1];
     char mid;
     if(open==close){
         cout<<"NO\n";
         return;
     }
     if((s[0]=='A'||s[n-1]=='A')&&(s[0]=='B'||s[n-1]=='B'))
          char mid = 'C';
    else if((s[0]=='A'||s[n-1]=='A')&&(s[0]=='C'||s[n-1]=='C'))
          char mid = 'B';
    else char mid = 'A';

    string s2 =s;
     for (int i = 0; i <n; i++)
     {
         if(s[i]==open){
             s[i]='(';
             s2[i]='(';
         }
         else if(s[i]==close){
             s[i]=')';
             s2[i]=')';
         }
         else{
             s[i]='(';
             s2[i]=')';
         }
     }
    if(areBracketsBalanced(s)||areBracketsBalanced(s2)){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}