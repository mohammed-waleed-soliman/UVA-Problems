#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dx[]={0,0,1,-1}; int dy[]={1,-1,0,0}; char dir[]={'R','L','D','U'}; // 4 directions
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
string word = "@IEHOVA#";
int cur = 0;
vector<char>res;
bool isValid(int i, int j, int n, int m)
{
  if(i<0 || j<0 || i>=n || j>=m) return false;
  return true;
}
void floodFill(int i, int j, vector<string>& grid, vector<vector<bool>>& vis)
{
  vis[i][j]=true;
  if(grid[i][j]==word[cur]) cur++;
  for(int k = 0; k < 4; k++)
  {
    if(isValid(i+dx[k],j+dy[k],grid.size(),grid[0].size()) && !vis[i+dx[k]][j+dy[k]] && word[cur]==grid[i+dx[k]][j+dy[k]])
    {
      res.push_back(dir[k]);
      floodFill(i+dx[k],j+dy[k],grid,vis);
    }
  }
}
void solution(){
  int n, m;
  cin >> n >> m;
  vector<string>grid(n);
  vector<vector<bool>>vis(n,vector<bool>(m));
  for(int i = 0; i < n; i++) cin >> grid[i];
  int s, e;
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(grid[i][j]=='@') s = i, e = j;
  floodFill(s,e,grid,vis);
  for(int i = 0; i < res.size(); i++)
  {
    if(res[i]=='U') cout << "forth";
    else if(res[i]=='R') cout << "right";
    else cout << "left";
    if(i!=res.size()-1) cout << " ";
  }
  cout << endl;
  cur = 0;
  res.clear();
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}
