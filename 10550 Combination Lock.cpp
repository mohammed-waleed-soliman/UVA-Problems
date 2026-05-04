#include <bits/stdc++.h>
#define el "\n"
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  while(true)
  {
    int p, x, y, z;
    cin >> p >> x >> y >> z;
    if(p==0 && x==0 && y==0 && z==0) return;
    int res = 3*360;
    int temp = 0;
    for(int i = p; i!=x; i=(((i-1)%40)+40)%40)
    {
      if(i<0) i=39;
      temp++;
    }
    res+=temp*9;
    if(x==y) res+=360;
    else
    {
      int temp = 0;
      for(int i = x; i!=y; i=(i+1)%40) temp++;
      res+=temp*9;
    }
    if(y==z) res+=360;
    else
    {
      int temp = 0;
      for(int i = y; i!=z; i=(((i-1)%40)+40)%40)
      {
        if(i<0) i=39;
        temp++;
      }
      res+=temp*9;
    }
    cout << res << el;
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
