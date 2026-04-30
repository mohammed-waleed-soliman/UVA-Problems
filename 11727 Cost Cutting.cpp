#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solution(){
  ll a, b, c;
  cin >> a >> b >> c;
  cout << a+b+c - max({a,b,c}) - min({a,b,c}) << endl;
}

int main(){
  int ntimes = 1, i = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    cout << "Case " << i << ": ";
    i++;
    solution();
  }
}
