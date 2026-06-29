#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
long long powMod(long long b, long p, long long mod)
{
  if(p==0) return 1;
  b %= mod;
  long long sq = powMod(b,p/2,mod);
  sq = (sq*sq)%mod;
  if(p&1) sq = (sq*b)%mod;
  return sq;
}

void solution(){
  long long b, p, mod;
  while(cin >> b >> p >> mod)
  {
    cout << powMod(b,p,mod) << endl;
  }
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
