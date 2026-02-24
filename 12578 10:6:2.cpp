#include <bits/stdc++.h>
const double pi = acos(-1.0);
#define ld long double
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  ld l;
  cin >> l;
  ld r = l/5.0;
  ld w = (3.0*l)/5.0;
  ld circle = pi*r*r;
  ld rectangle = l*w;
  cout << fixed << setprecision(2) << circle << " " << rectangle-circle << endl;
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
