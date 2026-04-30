#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll a, b;
  while (scanf("%lld %lld", &a, &b)!=EOF)
  {
    ll res = llabs(b-a);
    printf("%lld\n",res);
  }
}
