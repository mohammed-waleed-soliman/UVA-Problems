#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1, i = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    ll k, val;
    cin >> k;
    ll res = 0LL;
    while (k--)
    {
      cin >> val;
      res = max(res,val);
    }
    cout << "Case " << i++ << ": ";
    cout << res << endl;
  }
}
