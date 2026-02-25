#include <bits/stdc++.h>
const double pi = acosl(-1.0);
#define ld long double
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
double DEG_to_RAD(double d) { return d*pi / 180.0; }
// ----------------------------------------------------------------- //
void solution(){
  ld s, a;
  string word;
  while (cin>>s>>a)
  {
    cin >> word;
    s += 6440.0L;
    if(word=="min") a /= 60.0L;
    while (a>180.0L) a = abs(360.0L-a);
    ld arc = (2.0*pi*s)*(a/360.0L);
    ld ang = 90.0L-(a/2.0L);
    ld chord = s*cos(DEG_to_RAD(ang))*2.0L;
    cout << fixed << setprecision(6) << arc << " " << chord << endl;
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
