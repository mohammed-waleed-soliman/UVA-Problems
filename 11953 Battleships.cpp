#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dx[]={0,0,1,-1}; int dy[]={1,-1,0,0}; // 4 directions
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
bool isValid(int i, int j, int n)
{
  if(i<0 || j<0 || i>=n || j>=n) return false;
  return true;
}
void floodFill(int i, int j, vector<string>& grid, vector<vector<bool>>& vis)
{
  vis[i][j] = true;
  for(int k = 0; k < 4; k++)
  {
    if(isValid(i+dx[k],j+dy[k],grid.size()) && !vis[i+dx[k]][j+dy[k]] && grid[i+dx[k]][j+dy[k]]!='.')
    {
      floodFill(i+dx[k],j+dy[k],grid,vis);
    }
  }
}
void solution(){
  int t;
  cin >> t;
  int temp = 0;
  while(t--)
  {
    int n, res = 0;
    cin >> n;
    vector<string>grid(n);
    vector<vector<bool>> vis(n,vector<bool>(n));
    for(int i = 0; i < n; i++) cin >> grid[i];
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(grid[i][j]=='x' && !vis[i][j])
        {
          res++;
          floodFill(i,j,grid,vis);
        }
      }
    }
    cout << "Case " << ++temp << ": " << res << endl;
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
