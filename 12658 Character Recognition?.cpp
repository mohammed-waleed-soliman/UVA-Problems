#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int n;
  cin >> n;
  string arr[5];
  int res = 0;
  for(int i = 0; i < 5; i++) cin >> arr[i];
  for(int i = 0; i < n*4; i+=4)
  {
    bool cond = true;
    for(int j = 0; j < 5; j++) if(arr[j][i+1]!='*') cond = false;
    if(cond)
    {
      res *= 10;
      res += 1;
      continue;
    }
    cond = true;
    for(int j = 0; j < 5; j++) if(arr[j][i+2]!='*') cond = false;
    if(cond)
    {
      res *= 10;
      res += 3;
      continue;
    }
    res *= 10;
    res += 2;
  }
  cout << res << endl;
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
