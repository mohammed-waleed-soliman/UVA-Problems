#include <bits/stdc++.h>
#define ld long double
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
ld triangleArea(ld a, ld b, ld c)
{
  ld s = (a+b+c)/2.0;
  return sqrt((s-a)*(s-b)*(s-c)*s);
}

void solution(){
  int n;
  cin >> n;
  ld arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  sort(arr,arr+n);
  ld res = 0;
  for(int i = 0; i < n-2; i++) if(arr[i]+arr[i+1]>=arr[i+2]) res = max(res,triangleArea(arr[i],arr[i+1],arr[i+2]));
  cout << fixed << setprecision(2) << res << endl;
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
