#include <bits/stdc++.h>
#define EPS 1e-9
#define ld long double
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
struct polygon
{
  ld x1,y1,x2,y2;
  ld x,y,r;
  char type;
};
// ----------------------------------------------------------------- //
void solution(){
  char c;
  vector<polygon>a;
  while (cin>>c)
  {
    if(c=='*') break;
    if(c=='r')
    {
      polygon p;
      p.type='r';
      cin >> p.x1 >> p.y1 >> p.x2 >> p.y2;
      a.push_back(p);
    }
    else
    {
      polygon p;
      p.type='c';
      cin >> p.x >> p.y >> p.r;
      a.push_back(p);
    }
  }
  ld x, y;
  int pt = 1;
  while (true)
  {
    cin >> x >> y;
    if(fabs(x-9999.9L)<EPS && fabs(y-9999.9L)<EPS) break;
    bool cond = true;
    for(int i = 0; i < a.size(); i++)
    {
      if(a[i].type=='r')
      {
        if(x>a[i].x1 && x<a[i].x2 && y>a[i].y2 && y<a[i].y1)
        {
          cond = false;
          cout << "Point " << pt << " is contained in figure " << i+1 << endl;
        }
      }
      else
      {
        if(a[i].r*a[i].r>(fabs(x-a[i].x)*fabs(x-a[i].x))+(fabs(y-a[i].y)*fabs(y-a[i].y)))
        {
          cond = false;
          cout << "Point " << pt << " is contained in figure " << i+1 << endl;
        }
      }
    }
    if(cond) cout << "Point " << pt << " is not contained in any figure" << endl;
    pt++;
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
