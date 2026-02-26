#include <bits/stdc++.h>
#define ld long double
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
struct rectangle
{
  ld x1, x2, y1,y2;
};
// ----------------------------------------------------------------- //
void solution(){
  vector<rectangle>v;
  char c;
  while (true)
  {
    cin >> c;
    if(c=='*') break;
    rectangle r;
    cin >> r.x1 >> r.y1 >> r.x2 >> r.y2;
    v.push_back(r);
  }
  ld x,y;
  int t=1;
  while (true)
  {
    cin >> x >> y;
    if(x==9999.9L && y==9999.9L) break;
    bool cond = true;
    for(int i = 0; i < v.size(); i++)
    {
      if(x<v[i].x2 && x>v[i].x1 && v[i].y1>y && v[i].y2<y)
      {
        cout << "Point " << t << " is contained in figure " << i+1 << endl;
        cond = false;
      }
    }
    if(cond) cout << "Point " << t << " is not contained in any figure" << endl;
    t++;
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
