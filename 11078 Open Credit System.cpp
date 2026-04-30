#include <bits/stdc++.h>
#define ll long long
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solution(){
  int size;
  cin >> size;
  ll arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  ll dif = arr[0];
  ll mx = LONG_LONG_MIN;
  for (int i = 1; i < size; i++)
  {
    mx = max(mx,dif-arr[i]);
    dif = max(dif,arr[i]);
  }
  cout << mx << endl;
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
