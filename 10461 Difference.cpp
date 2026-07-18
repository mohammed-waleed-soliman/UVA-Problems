#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int n, m;
  int ts = 0;
  while(cin >> n >> m)
  {
    if(n==0 && m==0) break;
    int u, v, sum = 0, query;
    int arr[n+1];
    for(int i = 1; i <= n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
    vector<vector<int>> adj1(n+1),adj2(n+1);
    for(int i = 0; i < m; i++)
    {
      cin >> u >> v;
      adj1[v].push_back(u);
      adj2[u].push_back(v);
    }
    cin >> query;
    cout << "Case #" << ++ts << ":" << endl;
    while(query--)
    {
      cin >> u;
      queue<int> q;
      vector<bool>vis(n+1);
      q.push(u);
      vis[u] = true;
      int x = 0;
      x += arr[u];
      while(!q.empty())
      {
        int node = q.front();
        q.pop();
        for(auto neg:adj1[node])
        {
          if(!vis[neg])
          {
            q.push(neg);
            vis[neg]=true;
            x += arr[neg];
          }
        }
      }
      q.push(u);
      while(!q.empty())
      {
        int node = q.front();
        q.pop();
        for(auto neg:adj2[node])
        {
          if(!vis[neg])
          {
            q.push(neg);
            vis[neg]=true;
            x += arr[neg];
          }
        }
      }
      cout << sum - x << endl;
    }
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
