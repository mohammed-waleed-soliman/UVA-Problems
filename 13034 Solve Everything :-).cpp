#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    ll val;
    bool cond = false;
    for (ll i = 0; i < 13; i++)
    {
      cin >> val;
      if(!val || val>128) cond = true;
    }
    cout << "Set #" << i++ << ": ";
    if(cond) cout << "No" << endl;
    else cout << "Yes" << endl;
    solution();
  }
}
