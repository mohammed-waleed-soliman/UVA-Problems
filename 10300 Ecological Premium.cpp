#include <bits/stdc++.h>
#define ll long long
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  ll n, a, b, c;
  cin >> n;
  ll res = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c;
    res += a*c;
  }
  cout << res << endl;
}

int main(){
  Mohammed_Waleed(); 
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}
