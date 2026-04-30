#include <bits/stdc++.h>
#define ll long long
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
ll convert(ll val){
  if(val<=9) return val;
  ll x = 0;
  while (val)
  {
    x += val%10;
    val /= 10;
  }
  return convert(x);
}

int main(){
  Mohammed_Waleed();
  ll val;
  while (scanf("%lld",&val) && val)
  {
    cout << convert(val) << endl;
  }
}
