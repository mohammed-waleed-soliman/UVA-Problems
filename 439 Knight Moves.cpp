#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dx[]={1,1,-1,-1,2,-2,2,-2}; int dy[]={2,-2,2,-2,1,1,-1,-1}; // knight moves
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
bool is_valid(int i, int j)
{
  if(i<0 || j<0 || i>=8 || j>=8) return false;
  return true;
}
void solution(){
  string a, b;
  while(cin >> a >> b)
  {
    int i = a[0]-'a', j = a[1]-'1';
    int x = b[0]-'a', y = b[1]-'1';
    map<pair<int,int>,int>vis;
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[q.front()] = 0;
    while(!q.empty())
    {
      pair<int,int> node = q.front();
      int depth = vis[node];
      q.pop();
      if(node==make_pair(x,y)) break;
      for(int k = 0; k < 8; k++)
      {
        if(is_valid(node.first+dx[k],node.second+dy[k]) && !vis.count({node.first+dx[k],node.second+dy[k]}))
        {
          q.push({node.first+dx[k],node.second+dy[k]});
          vis[{node.first+dx[k],node.second+dy[k]}] = vis[node]+1;
          if(node==make_pair(x,y)) break;
        }
      }
    }
    cout << "To get from " << a << " to " << b << " takes " << vis[{x,y}] << " knight moves." << endl;
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
