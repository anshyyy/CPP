#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
void solve(){ 
     ll ss ; cin >> ss ; string s ; cin >> s ;
        string ssss = "" ; stack<char> sssss ;
        for(int i=0;i<ss;i++){
            sssss.push(s[i]);
        }
        while(!sssss.empty()){
            int sss=sssss.top()-'0';
            sssss.pop();
            if(sss!=0){
                ssss+=(sss - 1 + 'a');
            }
            else{
                int aa=sssss.top()-'0';
                sssss.pop();
                int a=sssss.top()-'0';
                sssss.pop();
                int ssssss=a*10+aa;
                ssss+=(ssssss - 1 + 'a');
            }
        }
        reverse(ssss.begin(),ssss.end());
        cout << ssss << endl;
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}