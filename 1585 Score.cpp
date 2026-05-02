#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  string word;
  cin >> word;
  int n = word.size(), res = 0, count = 0;
  for(int i = 0; i < n; i++)
  {
    if(word[i]=='O')
    {
      count++;
      res+=count;
    }
    else count = 0;
  }
  cout << res << endl;
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
