#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1, i = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    ll size, val, x;
    cin >> size >> x;
    ll a = 0, b = 0;
    for (ll i = 1; i < size; i++)
    {
      cin >> val;
      if(val>x) a++;
      else if(val<x) b++;
      x = val;
    }
    cout << "Case " << i++ << ": ";
    cout << a << " " << b << endl; 
  }
}
