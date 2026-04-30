#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solution(){
  ld p, a, b, c, d;
  ll size;
  while(scanf("%Lf %Lf %Lf %Lf %Lf %lld", &p, &a, &b, &c, &d, &size)!=EOF)
  {
    ld arr[size];
    for (ld i = 1; i <= size; i++)
    {
        arr[(int)(i-1)] = p*(sin(a*i+b)+cos(c*i+d)+2);
    }
    ld res = LONG_LONG_MIN;
    ld mx = arr[0];
    for (ll i = 1; i < size; i++)
    {
        res = max(res,mx-arr[i]);
        mx = max(mx,arr[i]);
    }
    cout << fixed << setprecision(6) << max(res,(ld)(0)) << endl;
  }
}

int main(){
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
