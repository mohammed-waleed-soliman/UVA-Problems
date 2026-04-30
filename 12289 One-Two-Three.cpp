#include <bits/stdc++.h>
using namespace std;

void solution(){
  string word;
  cin >> word;
  if(word.size()>3) cout << "3" << endl;
  else
  {
    int count = 0;
    if(word[0]=='o') count++;
    if(word[1]=='n') count++;
    if(word[2]=='e') count++;
    if(count>=2) cout << 1 << endl;
    else cout << 2 << endl;
  }
}

int main(){
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}
