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
  while(cin>>n>>m)
  {
    string arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int res = 0;
    for(int k = 0; k < m; k++)
    {
      int i = 0, j = k;
      bool cond = false;
      while(i<n && j<m)
      {
        if(arr[i][j]=='/') cond = !cond;
        if(cond) res+=2;
        i++,j++;
      }
    }
    for(int k = n-1; k > 0; k--)
    {
      int i = k, j = 0;
      bool cond = false;
      while(i<n && j<m)
      {
        if(arr[i][j]=='/') cond = !cond;
        if(cond) res+=2;
        i++,j++;
      }
    }
    cout << res << endl;
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
