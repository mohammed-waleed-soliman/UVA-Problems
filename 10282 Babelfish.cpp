#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define yes cout<<"YES"<<endl;
#define no cout <<"NO"<<endl;
#define MW ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
  string line;
  map <string,string> mp;
  while (getline(cin,line))
  {
    if (line == "")
    {
      break;
    }
    string word1 = "", word2 = "";
    bool cond = true;
    for (int i = 0; i <= line.size()-1; i++)
    {
      if (cond == false) word2 += line[i];
      else
      {
        if (line[i] == ' ')
        {
          cond = false;
          continue;
        }
        word1 += line[i];
      }
    }
    mp.insert({word2,word1});
  }
  string word;
  while (getline(cin,word))
  {
    if (word == "") break;
    if (mp[word].empty())
    {
      cout << "eh" << endl;
    }
    else
    {
      cout << mp[word] << endl;
    }
  }
}
