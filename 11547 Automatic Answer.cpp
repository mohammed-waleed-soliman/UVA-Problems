#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;

void solution(){
  ll n;
  cin >> n;
  n *= 63;
  n += 7492;
  n *= 5;
  n -= 498;
  n /= 10;
  cout << abs(n%10) << el;
}

int main(){
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}
