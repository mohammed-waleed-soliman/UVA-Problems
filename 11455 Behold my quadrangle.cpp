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
  ll arr[4];
  for(int i = 0; i < 4; i++) cin >> arr[i];
  sort(arr,arr+4);
  if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3]) cout << "square" << endl;
  else if(arr[0]==arr[1] && arr[2]==arr[3]) cout << "rectangle" << endl;
  else if(arr[0]+arr[1]+arr[2]<=arr[3]) cout << "banana" << endl;
  else cout << "quadrangle" << endl;
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
