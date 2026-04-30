#include <bits/stdc++.h>
#define el "\n"
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
int func(int val)
{
  if(val==1) return val;
  if(val<10) return 2;
  else return 3;
}
void solution(){
  string word;
  while(true)
  {
    cin >> word;
    if(word=="END") return;
    if(word=="1")
    {
      cout << word << el;
      continue;
    }
    int val=word.size(), res = 1;
    res += func(val);
    cout << res << el;
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
