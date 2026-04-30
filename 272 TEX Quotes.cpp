#include <bits/stdc++.h>
using namespace std;

int main(){
  int ntimes = 1;
  string word;
  int x = 0;
  while (getline(cin,word))
  {
    for (int i = 0; i < word.size(); i++)
    {
      if(word[i]=='"')
      {
        if(x%2) cout << "''";
        else cout << "``";
        x++;
      }
      else cout << word[i];
    }
    cout << endl;
  }
}
