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
#include <bits/stdc++.h>
using namespace std;
 
// Number of vertices
int V ;
 
void DFS(vector<vector<bool>>&graph, bool marked[], int n,
               int vert, int start, int &count)
{
    // mark the vertex vert as visited
    marked[vert] = true;
 
    // if the path of length (n-1) is found
    if (n == 0) {
 
        // mark vert as un-visited to make
        // it usable again.
        marked[vert] = false;
 
        // Check if vertex vert can end with
        // vertex start
        if (graph[vert][start])
        {
            count++;
            return;
        } else
            return;
    }
 
    // For searching every possible path of
    // length (n-1)
    for (int i = 0; i < V; i++)
        if (!marked[i] && graph[vert][i])
 
            // DFS for searching path by decreasing
            // length by 1
            DFS(graph, marked, n-1, i, start, count);
 
    // marking vert as unvisited to make it
    // usable again.
    marked[vert] = false;
}
 
// Counts cycles of length N in an undirected
// and connected graph.
int countCycles(vector<vector<bool>>&graph, int n)
{
    // all vertex are marked un-visited initially.
    bool marked[V];
    memset(marked, 0, sizeof(marked));
 
    // Searching for cycle by using v-n+1 vertices
    int count = 0;
    for (int i = 0; i < V - (n - 1); i++) {
        DFS(graph, marked, n-1, i, i, count);
 
        // ith vertex is marked as visited and
        // will not be visited again.
        marked[i] = true;
    }
 
    return count/2;
}
void solve(){ 
cin>>V;
int m;cin>>m;
  vector<vector<bool>> mat(V,vector<bool>(V,0));
  while(m--){
    int x,y;cin>>x>>y;
    mat[x-1][y-1]=1;
    mat[y-1][x-1]=1;
  }
  cout<< countCycles(mat, 3)<<endl;     
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