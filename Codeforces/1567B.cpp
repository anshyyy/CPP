#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
const int N = 3e5 + 5;
int ar[N]; 

 void solve(){
    int a, b; 
    cin >> a >> b;
   //  int x = ar[a];
    
   //  if (x == b)cout << a << "\n";
   //  else if ((x ^ b) == a)
   //  cout << a + 2 << endl;
   //  else cout << a + 1 << "\n";
   int x;
   if(a%4==1){x=a-1;}
   else if(a%4==2) x=1;
   else if(a%4==3) x=a;
   else x=0;

   if(x==b) cout<<a<<endl;
   else if((x^b)!=a) cout<<a+1<<endl;
   else cout<<a+2<<endl;

 }
int main() {
    IOS
    for (int i = 1; i < N; i++) {
    ar[i] = ar[i - 1] ^ (i - 1);
    }
    int t;
    cin >> t;
    while(t--){
       solve();
    }
    return 0;
}