#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
vector<vector<int>> primeFactors(101);
void preCompute()
{
  for(int i = 2; i <= 100; i++)
  {
    int copy = i;
    int div = 2;
    while(copy!=1)
    {
      if(copy%div==0)
      {
        primeFactors[i].push_back(div);
        copy/=div;
      }
      else div++;
    }
  }
}

int nCr(int n, int m)
{
  int freq[101]={0};
  int mx = max(m,n-m);
  int mn = min(m,n-m);
  for(int i = n; i > mx; i--)
  {
    for(int j = 0; j < primeFactors[i].size(); j++)
    {
      freq[primeFactors[i][j]]++;
    }
  }
  for(int i = 2; i <= mn; i++)
  {
    for(int j = 0; j < primeFactors[i].size(); j++)
    {
      freq[primeFactors[i][j]]--;
    }
  }
  int res = 1;
  for(int i = 2; i < 101; i++)
  {
    while(freq[i]--)
    {
      res *= i;
    }
  }
  return res;
}

void solution(){
  int n, m;
  while(cin >> n >> m)
  {
    if(n==0 && m==0) return;
    cout << n << " things taken " << m << " at a time is " << nCr(n,m) << " exactly." << endl;
  }
}

int main(){
  Mohammed_Waleed();
  preCompute();
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
