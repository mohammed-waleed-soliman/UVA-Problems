#include <bits/stdc++.h>
const double pi = acosl(-1.0);
#define ld long double
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  ld l, w, h, ang;
  while (cin >> l >> w >> h >> ang)
  {
    ld res;
    if(ang<=(atan(h/l)*180.0/pi)) res = (w*l*h)-(0.5L*l*l*tan(pi*ang/180.0L)*w);
    else
    {
      ang = 90-ang;
      res = (0.5L*h*h*tan(pi*ang/180.0L)*w);
    }
    cout << fixed << setprecision(3) << res << " mL" << endl;
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
