#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1;
  ll a, b;
  while (scanf("%lld %lld", &a, &b) && !(a==-1 && b==-1))
  {
    i++;
    if(abs(a-b)<50) cout << abs(a-b) << endl;
    else cout << 100-abs(a-b) << endl; 
  }
}
