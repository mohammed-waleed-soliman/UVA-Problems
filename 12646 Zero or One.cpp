#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int ntimes = 1;
  ll a, b, c;
  while (scanf("%lld %lld %lld", &a, &b, &c)!=EOF)
  {
    if(a==b && b==c) cout << "*" << endl;
    else if(a==b && b!=c) cout << "C" << endl;
    else if(a==c && c!=b) cout << 'B' << endl;
    else cout << "A" << endl;
  }
}
