#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int t, c = 0;
  cin >> t;
  while(t--)
  {
    vector<pair<string,int>> arr(10);
    int mx = -1;
    for(int i = 0; i < 10; i++)
    {
      cin >> arr[i].first >> arr[i].second;
      mx = max(mx,arr[i].second);
    }
    cout << "Case #" << ++c << ":" << endl;
    for(int i = 0; i < 10; i++)
    {
      if(arr[i].second==mx) cout << arr[i].first << endl;
    }
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
