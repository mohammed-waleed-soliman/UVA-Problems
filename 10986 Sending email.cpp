#include <bits/stdc++.h>
#define ll long long
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
vector <long long> dijkstra(long long n, long long source, map<long long,vector<pair<long long,long long>>>&adj)
{
  vector<long long>res(n+1,LONG_LONG_MAX);
  vector<bool>vis(n+1);
  res[source]=0;
  function<bool(pair<long long,long long>,pair<long long,long long>)> cmp = [](pair<long long,long long>a,pair<long long,long long>b){return a.second>b.second;};
  priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,decltype(cmp)>pq(cmp);
  pq.push({source,0});
  while (!pq.empty())
  {
    for(auto neg:adj[pq.top().first])
    {
      if(res[neg.first]>neg.second+res[pq.top().first])
      {
        res[neg.first]=neg.second+res[pq.top().first];
        pq.push({neg.first,res[neg.first]});
      }
    }
    vis[pq.top().first]=1;
    while (!pq.empty() && vis[pq.top().first]) pq.pop();
  }
  return res;
}
// ----------------------------------------------------------------- //
void solution(){
  ll ttt, tt = 1;
  cin >> ttt;
  while(tt<=ttt)
  {
    ll n, m, s, t, u, v, w;
    cin >> n >> m >> s >> t;
    map<long long,vector<pair<long long,long long>>>adj;
    for(int i = 0; i < m; i++)
    {
      cin >> u >> v >> w;
      adj[u].push_back({v,w});
      adj[v].push_back({u,w});
    }
    vector<ll>dist=dijkstra(n,s,adj);
    if(dist[t]==LONG_LONG_MAX) cout << "Case #" << tt++ << ": " << "unreachable" << endl;
    else cout << "Case #" << tt++ << ": " << dist[t] << endl;
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
