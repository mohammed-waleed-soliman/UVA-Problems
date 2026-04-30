#include <bits/stdc++.h>
#define ll long long
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  ll n, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, val;
  cin >> n;
  for (ll i = 0; i < n; i++)
  {
    cin >> val;
    mx = max(mx,val);
    mn = min(mn,val);
  }
  ll x = (mx+mn)/2;
  ll res = (x-mn)*2+(mx-x)*2;
  cout << res << endl;
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
