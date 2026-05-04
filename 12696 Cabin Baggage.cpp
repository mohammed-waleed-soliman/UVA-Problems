#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
int res = 0;
void solution(){
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if(((a<=56 && b<=45 && c<=25) || a+b+c<=125) && d<=7)
  {
    cout << 1 << endl;
    res++;
  }
  else cout << 0 << endl;
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
  cout << res << endl;
}
