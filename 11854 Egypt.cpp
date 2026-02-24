#include <bits/stdc++.h>
#define ll long long
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  ll arr[3];
  while (true)
  {
    bool cond = false;
    for(int i = 0; i < 3; i++)
    {
      cin >> arr[i];
      if(arr[i]) cond = true;
    }
    if(!cond) break;
    sort(arr,arr+3);
    if(powl(arr[0],2)+powl(arr[1],2)==powl(arr[2],2)) cout << "right" << endl;
    else cout << "wrong" << endl;
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
