#include <bits/stdc++.h>
using namespace std;

int main(){
  int ntimes = 1, i = 1;
  string word;
  while (true)
  {
    cin >> word;
    if(word=="HELLO")
    {
      printf("Case %lld: ", i++);
      printf("ENGLISH");
      cout << endl;
    }
    else if(word=="HOLA")
    {
      printf("Case %lld: ", i++);
      printf("SPANISH");
      cout << endl;
    }
    else if(word=="HALLO")
    {
      printf("Case %lld: ", i++);
      printf("GERMAN");
      cout << endl;
    }
    else if(word=="BONJOUR")
    {
      printf("Case %lld: ", i++);
      printf("FRENCH");
      cout << endl;
    }
    else if(word=="CIAO")
    {
      printf("Case %lld: ", i++);
      printf("ITALIAN");
      cout << endl;
    }
    else if(word=="ZDRAVSTVUJTE")
    {
      printf("Case %lld: ", i++);
      printf("RUSSIAN");
      cout << endl;
    }
    else if(word!="#")
    {
      printf("Case %lld: ", i++);
      printf("UNKNOWN");
      cout << endl;
    }
    else
    {
      break;
    }
  }
}
