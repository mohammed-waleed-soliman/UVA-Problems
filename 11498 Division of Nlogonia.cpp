#include <bits/stdc++.h>
#define ll long long
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
ll q;
void solution(){
  ll n, m;
  cin >> n >> m;
  ll x, y;
  while (q--)
  {
    cin >> x >> y;
    if(x==n || y==m) cout << "divisa" << endl;
    else if(x>n)
    {
      if(y>m) cout << "NE" << endl;
      else cout << "SE" << endl;
    }
    else
    {
      if(y>m) cout << "NO" << endl;
      else cout << "SO" << endl;
    }
  }
}

int main(){
  Mohammed_Waleed(); 
  int ntimes = 1;
  while (true)
  {
    cin >> q;
    if(q==0) break;
    solution();
  }
}
