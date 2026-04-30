#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;

void solution(){
  ll n, m;
  cin >> n >> m;
  n -= 2, m -= 2;
  if(n%3) n++;
  if(n%3) n++;
  if(m%3) m++;
  if(m%3) m++;
  ll res = (n/3)*(m/3);
  cout << res << el;
}

int main(){
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}
