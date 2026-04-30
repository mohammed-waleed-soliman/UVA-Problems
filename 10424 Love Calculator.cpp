#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ld func(string a){
  ld sum = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if(isalpha(a[i]))
    {
      sum += tolower(a[i])-'a'+1;
    }
  }
  while (sum>9)
  {
    ll x = sum;
    sum = 0;
    while (x)
    {
      sum += (x%10);
      x /= 10;
    }
  }
  return sum;
}

int main(){
  int ntimes = 1;
  while (true)
  {
    string a, b;
    if (!getline(cin, a)) break;
    if (!getline(cin, b)) break;
    ld x = func(a), y = func(b);
    if(y<x) swap(x,y);
    ld ratio = x/y;
    ratio *= 100;
    cout << fixed << setprecision(2) << min(ratio,(ld)(100.00)) << " %" << endl;
  }
}
