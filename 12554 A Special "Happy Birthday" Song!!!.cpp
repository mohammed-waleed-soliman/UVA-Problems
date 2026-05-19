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
  cin >> n;
  string name[n];
  string song[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
  for(int i = 0; i < n; i++) cin >> name[i];
  int t = n/16;
  if(n%16) t++;
  int ind = 0;
  while(t--)
  {
    for(int i = 0; i < 16; i++)
    {
      cout << name[ind++] << ": " << song[i] << endl;
      ind %= n;
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
