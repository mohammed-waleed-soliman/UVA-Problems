#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1, i = 1;
  ll a, b;
  while (scanf("%lld %lld", &a, &b) && (a||b))
  {
    cout << "Case " << i << ": ";
    i++;
    ll x = a/b;
    if(a%b) x++;
    if(x>27) cout << "impossible" << endl;
    else cout << x-1 << endl;
  }
}
