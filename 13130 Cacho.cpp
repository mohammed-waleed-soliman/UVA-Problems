#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    bool cond = false;
    if((a+1==b)&&(b+1==c)&&(c+1==d)&&(d+1)==e) cond = true;
    if(cond) cout << "Y" << endl;
    else cout << "N" << endl;
    solution();
  }
}
