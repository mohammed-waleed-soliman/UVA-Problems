#include <bits/stdc++.h>
#define ll long long
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
void longDivision(long long n, long long d)
{
  /*input: (n:numerator, d:denominator)*/
  deque<char>res;
  deque<char>nr;
  while(n)
  {
    nr.push_front((char)('0'+(n%10)));
    n/=10;
  }
  nr.push_back('.');
  long long current = 0;
  bool cond = false;
  map<ll,ll>mp;
  int ind;
  for(int i = 0; true; i++)
  {
    nr.push_back('0');
    if(nr[i]=='.')
    {
      res.push_back('.');
      ind=i;
      cond = true;
      continue;
    }
    current *= 10;
    current += nr[i]-'0';
    if(cond)
    {
      if(mp[current]==0) mp[current]=i;
      else
      {
        int count_del=0;
        while(res[0]=='0' && res[1]!='.')
        {
          res.pop_front();
          count_del++;
        }
        while(res[0]!='.')
        {
          cout << res[0];
          res.pop_front();
          count_del++;
        }
        cout << res[0];
        res.pop_front();
        count_del++;
        int st = mp[current]-count_del;
        int end = i-count_del;
        int cycle=end-st;
        for(int j = 0; j < st; j++) cout << res[j];
        cout << "(";
        for(int j = st; j < min(end,st+50); j++) cout << res[j];
        if(end-st<=50) cout << ")";
        else cout << "...)";
        cout << endl;
        cout << "   " <<cycle << " = number of digits in repeating cycle" << endl << endl;
        break;
      }
    }
    long long x = current/d;
    res.push_back((char)(x+'0'));
    x *= d;
    current -= x;
  }
}
// ----------------------------------------------------------------- //
void solution(){
  ll n, d;
  while(cin>>n>>d)
  {
    cout << n << "/" << d << " = ";
    if(n==0)
    {
      cout << "0.(0)" << endl;
      cout << "1 = number of digits in repeating cycle";
    }
    else longDivision(n,d);
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
