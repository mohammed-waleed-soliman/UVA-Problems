#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
pair<int,int> segmentIntersection(pair<int,int> a, pair<int,int> b)
{
  if(a.first<=b.first)
  {
    if(b.second<=a.second) return {b.first,b.second};
    else
    {
      if(b.first>=a.second) return {-1,-1};
      else return {b.first,a.second};
    }
  }
  else
  {
    if(a.second<=b.second) return {a.first,a.second};
    else
    {
      if(a.first>=b.second) return {-1,-1};
      else return {a.first,b.second};
    }
  }
}
void solution(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    pair<int,int> a = segmentIntersection({a1,a2},{x1,x2});
    pair<int,int> b = segmentIntersection({b1,b2},{y1,y2});
    if(a==make_pair(-1,-1) || b==make_pair(-1,-1)) cout << "No Overlap" << endl;
    else cout << a.first << " " << b.first << " " << a.second << " " << b.second << endl;
    if(i!=t-1) cout << endl;
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
