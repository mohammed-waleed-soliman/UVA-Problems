#include <bits/stdc++.h>
#define ll long long
using namespace std;

pair<long double, long double> general_formula(long double a, long double b, long double c){
  pair<long double, long double> res;
  long double discriminant = powl(b, 2) - 4 * a * c;
  if (discriminant < 0) return {NAN, NAN};
  long double sqrt_d = sqrtl(discriminant);
  res.first = (-b + sqrt_d) / (2 * a);
  res.second = (-b - sqrt_d) / (2 * a);
  return res;
}

void solution(){
  ll x;
  cin >> x;
  pair<ll,ll>res=general_formula(1,1,-2*x);
  ll a = res.first;
  ll b = res.second;
  cout << max(a,b) << el;
}

int main(){
  int ntimes = 1, i = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    i++;
    solution();
  }
}
