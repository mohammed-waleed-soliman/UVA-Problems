#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dx[]={0,0,1,-1,-1,-1,1,1}; int dy[]={1,-1,0,0,-1,1,-1,1}; // 8 directions
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
bool isValid(int i, int j, int n)
{
  if(i<0 || j<0 || i>=n || j>=n) return false;
  return true;
}
void dfs(int i, int j, vector<string>&v, vector<vector<bool>>&vis)
{
  vis[i][j]=1;
  for(int k = 0; k < 8; k++)
  {
    if(isValid(i+dx[k],j+dy[k],v.size()) && !vis[i+dx[k]][j+dy[k]] && v[i+dx[k]][j+dy[k]]=='1') dfs(i+dx[k],j+dy[k],v,vis);
  }
}
// ----------------------------------------------------------------- //
void solution(){
  int n;
  int t = 0;
  while (cin>>n)
  {
    vector<string>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int res = 0;
    vector<vector<bool>>vis(n,vector<bool>(n,false));
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(v[i][j]=='1' && !vis[i][j])
        {
          res++;
          dfs(i,j,v,vis);
        }
      }
    }
    cout << "Image number " << ++t << " contains " << res << " war eagles." << endl;
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
