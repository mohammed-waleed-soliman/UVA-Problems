#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int t;
  cin >> t;
  while(t--)
  {
    int n, a, b;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
      cin >> a >> b;
      arr[i] = a-b;
    }
    bool cond = true;
    for(int i = 1; i < n; i++) if(arr[i]!=arr[i-1]) cond = false;
    if(cond) cout << "yes" << endl;
    else cout << "no" << endl;
    if(t==0) continue;
    cout << endl;
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
