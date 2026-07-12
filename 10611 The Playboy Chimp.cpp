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
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  int q;
  cin >> q;
  int tall;
  while (q--)
  {
    cin >> tall;
    if(arr[0]>=tall) cout << "X";
    else
    {
      int l = 0, r = n-1, ans = 0;
      while(l<=r)
      {
        int mid = l + (r-l)/2;
        if(arr[mid]<tall)
        {
          ans = mid;
          l = mid+1;
        }
        else r = mid-1;
      }
      cout << arr[ans];
    }
    cout << " ";
    if(tall>=arr[n-1]) cout << "X";
    else
    {
      int l = 0, r = n-1, ans = n-1;
      while(l<=r)
      {
        int mid = l + (r-l)/2;
        if(arr[mid]>tall)
        {
          ans = mid;
          r = mid-1;
        }
        else l = mid+1;
      }
      cout << arr[ans];
    }
    cout << endl;
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
