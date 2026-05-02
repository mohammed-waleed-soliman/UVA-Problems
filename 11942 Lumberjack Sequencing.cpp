#include <bits/stdc++.h>
#define MW_YH ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
  MW_YH
}
// ----------------------------------------------------------------- //
void solution(){
  int arr[10],copy[10];
  for(int i = 0; i < 10; i++)
  {
    cin >> arr[i];
    copy[i]=arr[i];
  }
  sort(copy,copy+10);
  bool cond = true;
  for(int i = 0; i < 10; i++)
  {
    if(arr[i]!=copy[i])
    {
      cond = false;
      break;
    }
  }
  if(cond)
  {
    cout << "Ordered" << endl;
    return;
  }
  cond = true;
  for(int i = 0; i < 10; i++)
  {
    if(arr[i]!=copy[10-i-1])
    {
      cond = false;
      break;
    }
  }
  if(cond) cout << "Ordered" << endl;
  else cout << "Unordered" << endl;
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  cin >> ntimes;
  cout << "Lumberjacks:" << endl;
  while (ntimes--)
  {
    solution();
  }
}
