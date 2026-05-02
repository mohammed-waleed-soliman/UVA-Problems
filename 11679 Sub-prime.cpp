#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int b, n;
  while(true)
  {
    cin >> b >> n;
    if(b==0 && n==0) return;
    int arr[b];
    for(int i = 0; i < b; i++) cin >> arr[i];
    int x, y, z;
    for(int i = 0; i < n; i++)
    {
      cin >> x >> y >> z;
      arr[x-1] -= z;
      arr[y-1] += z;
    }
    bool cond = true;
    for(int i = 0; i < b; i++) if(arr[i]<0) cond = false;
    if(cond) cout << "S" << endl;
    else cout << "N" << endl;
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
