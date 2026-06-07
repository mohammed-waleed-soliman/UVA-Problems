#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void dfs(int node, map<int,vector<int>>& adj, vector<bool>& vis, vector<int>& res)
{
  vis[node] = true;
  for(auto neg:adj[node]) if(!vis[neg]) dfs(neg,adj,vis,res);
  res.push_back(node);
}
vector<int> topologicalSort(int n, map<int,vector<int>>& adj, vector<bool>& vis)
{
  vector<int> order;
  for(int i = 1; i <= n; i++) if(!vis[i]) dfs(i,adj,vis,order);
  return order;
}
void solution(){
  int n, m;
  while(cin >> n >> m)
  {
    if(n==0 && m==0) return;
    int u, v;
    map<int,vector<int>>adj;
    vector<bool>vis(n+1);
    for(int i = 0; i < m; i++)
    {
      cin >> u >> v;
      adj[v].push_back(u);
    }
    vector<int>res = topologicalSort(n,adj,vis);
    for(auto i:res) cout << i << " ";
    cout << endl;
  }
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
