#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1;
  ll k, val, i = 1;
  while (scanf("%lld", &k))
  {
    if(k==0) return 0;
    ll a = 0, b = 0;
    while (k--)
    {
      cin >> val;
      if(val) a++;
      else b++;
    }
    cout << "Case " << i++ << ": ";
    cout << a-b << endl;
  }
}
