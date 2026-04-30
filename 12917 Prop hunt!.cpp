#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1;
  ll a, b, c;
  while (scanf("%lld %lld %lld", &a, &b, &c)!=EOF)
  {
    if(abs(c-a)<b) cout << "Hunters win!" << endl;
    else cout << "Props win!" << endl;
  }
}
