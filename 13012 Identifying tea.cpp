#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll type;
  while (scanf("%lld",&type)!=EOF)
  {
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    ll res = 0;
    if(a==type) res++;
    if(b==type) res++;
    if(c==type) res++;
    if(d==type) res++;
    if(e==type) res++;
    cout << res << endl;
    solution();
  }
}
