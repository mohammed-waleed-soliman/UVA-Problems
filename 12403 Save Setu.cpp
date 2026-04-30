#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
  ll k;
  cin >> k;
  string word;
  ll res = 0, val;
  while (k--)
  {
    cin >> word;
    if(word=="donate")
    {
      cin >> val;
      res += val;
    }
    else
    {
      cout << res << endl;
    }
  }
}

int main(){
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
