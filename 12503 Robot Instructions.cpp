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
  string word;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    cin >> word;
    if(word=="RIGHT") arr[i]=1;
    else if(word=="LEFT") arr[i]=-1;
    else
    {
      cin >> word;
      int ind;
      cin >> ind;
      arr[i]=arr[ind-1];
    }
  }
  int res = 0;
  for(int i = 0; i < n; i++) res+=arr[i];
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
