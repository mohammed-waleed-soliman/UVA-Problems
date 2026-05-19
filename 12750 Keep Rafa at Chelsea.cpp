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
  char arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  int l = 0, d = 0, w = 0;
  int res = 0;
  for(int i = 0; i < n; i++)
  {
    if(l+d+w<=2)
    {
      if(arr[i]=='L') l++;
      else if(arr[i]=='W') w++;
      else d++;
      res++;
    }
    else
    {
      if(w==0) break;
      if(arr[i]=='L') l++;
      else if(arr[i]=='W') w++;
      else d++;
      if(arr[i-3]=='L') l--;
      else if(arr[i-3]=='W') w--;
      else d--;
      res++;
    }
  }
  if(res==n && (arr[n-1]=='W' || arr[n-2]=='W' || arr[n-3]=='W')) cout << "Yay! Mighty Rafa persists!" << endl;
  else cout << res << endl;
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1, CaseNo = 0;
  cin >> ntimes;
  while (ntimes--)
  {
    cout << "Case " << ++CaseNo << ": ";
    solution();
  }
}
