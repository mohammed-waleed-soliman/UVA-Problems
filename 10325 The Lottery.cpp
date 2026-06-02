#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
bool knowBit(ll val, ll ind){
  return (val>>ind)&1;
}
ll gcd(ll x, ll y)
{
  if(x<y) swap(x,y);
  if(y==0) return x;
  return gcd(y,x%y);
}
ll lcm(ll x, ll y)
{
  return (x*y)/gcd(x,y);
}
// ----------------------------------------------------------------- //
void solution(){
  ll n, m;
  ll arr[15];
  while(cin >> n >> m)
  {
    for(int i = 0; i < m; i++) cin >> arr[i];
    int exclude = 0;
    for(int i = 1; i < (1<<m); i++)
    {
      ll d = 1;
      for(int j = 0; j < m; j++)
      {
        if(knowBit(i,j))
        {
          if(d==1) d = arr[j];
          else d = lcm(d,arr[j]);
        }
        if(d>n) break;
      }
      if(d>n) continue;
      if(__builtin_popcount(i)&1) exclude += n/d;
      else exclude -= n/d;
    }
    cout << n-exclude << el;
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
