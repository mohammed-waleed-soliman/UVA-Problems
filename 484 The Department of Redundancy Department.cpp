#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int n;
  vector<int>v;
  map<int,int>mp;
  while(cin >> n)
  {
    mp[n]++;
    if(mp[n]==1) v.push_back(n);
  }
  for(auto i:v) cout << i << " " << mp[i] << endl;
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
