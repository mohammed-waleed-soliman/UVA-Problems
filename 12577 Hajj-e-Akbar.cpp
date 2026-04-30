#include <bits/stdc++.h>
using namespace std;

void solution(){
  string word;
  int i = 1;
  while (getline(cin,word))
  {
    if(word=="*") break;
    cout << "Case " << i++ << ": ";
    if(word=="Hajj") cout << "Hajj-e-Akbar" << endl;
    else if(word=="Umrah") cout << "Hajj-e-Asghar" << endl;
  }
}

int main(){
  int ntimes = 1;
  while (ntimes--)
  {
    solution();
  }
}
