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
int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int res = 0;
        int n = heights.size();
        for(int i = 0;i<n;i++){
            while(s.empty()==false&&heights[s.top()]>=heights[i]){
                int tp = s.top();
                s.pop();
                int curr = heights[tp]*(s.empty()?i:(i-s.top()-1));
                res = max(res,curr);
            }
            s.push(i);
        }
        while(s.empty()==false){
            int tp = s.top();
            s.pop();
            int curr = heights[tp]*(s.empty()?n:(n-s.top()-1));
            res = max(res,curr);
        }
        return res;
    }
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<vector<int>>board(n,vector<int>(m,1));
            for(auto e : enemy){
                int x = e[0];
                int y = e[1];
				cout<<x<<" "<<y<<endl;
                for(int r=0;r<m;r++)
                   board[x-1][r] = 0;
                for(int c=0;c<n;c++){
					cout<<c<<" "<<y-1<<endl;
                   board[c][y-1]=0;
				}
            }
            // for(auto x:board){
            //     for(auto y: x){
            //         cout<<y<<" ";
            //     }
            //     cout<<endl;
            // }
            for(int i=1;i<n;i++){
                for(int j=0;j<m;j++){
                    if(!board[i][j])continue;
                    board[i][j] += (board[i-1][j])?board[i-1][j]:0; 
                }
            }
            cout<<"end"<<endl;
            for(auto x:board){
                for(auto y: x){
                    cout<<y<<" ";
                }
                cout<<endl;
            }
            int ans = 0;
            for(int i=0;i<n;i++){
                ans = max(ans,largestRectangleArea(board[i]));
            }
            
             return ans;
        }
void solve(){ 
	 int n,m,k;
	 cin>>n>>m>>k;
	 vector<vector<int>>arr;
	  loop(i,0,k){
		int x,y;
		cin>>x>>y;
		arr.push_back({x,y});
	  }
	 cout<<largestArea(n,m,k,arr)<<endl;
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