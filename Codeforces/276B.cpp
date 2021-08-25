#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return false;
        }
    }
    return true;
}
char ch[1000];
 int amt[30],count_odd=0;
void solve(){ 
     scanf("%s",ch);
    //  if(isPalindrome(s)){
    //      cout<<"First\n";
    //      return;
    //  }
    int n=strlen(ch);
    for (int i=0;i<n;i++)
    {
        amt[ch[i]-'a']++;
    }
    for (int i=0;i<26;i++)
    {
        if (amt[i] % 2 == 1) count_odd++;
    }
    if (count_odd == 0)
    {
        printf("First\n");
        return ;
    }
    if (count_odd == 1)
    {
        printf("First\n");
        return ;
    }
    if (count_odd % 2 == 0)
    {
        printf("Second\n");
        return ;
    }
    printf("First\n");
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}