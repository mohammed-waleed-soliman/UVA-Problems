#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
  ll n, k, p;
  cin >> n >> k >> p;
  p %= n;
  while (p--)
  {
    k++;
    if(k>n) k = 1;
  }
  cout << k << el;
}

int main(){
  int ntimes = 1;
  cin >> ntimes;
  ll i = 1;
  while (ntimes--)
  {
    cout << "Case " << i << ": ";
    i++;
    solution();
  }
}
