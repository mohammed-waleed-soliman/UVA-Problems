#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int n, m, val;
  while(cin >> n >> m)
  {
    int res = 0;
    for(int i = 0; i < n; i++)
    {
      bool cond = true;
      for(int j = 0; j < m; j++)
      {
        cin >> val;
        if(!val) cond = false;
      }
      if(cond) res++;
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
