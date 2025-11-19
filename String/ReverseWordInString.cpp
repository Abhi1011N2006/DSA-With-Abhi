#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
  string str;
  cout << "Enter string : ";
  getline(cin,str);
  reverse(str.begin() , str.end());
  int n = str.size();
  string word;
  string ans;
  cout << str << endl;
  for (int i = 0; i <= n; i++)
  {
    if (str[i]==' ')
    {
      continue;
    }
    while (i<n && str[i] != ' ' )
    {
      word +=str[i];
      i++;
     
    }
    reverse(word.begin(),word.end());
    ans += ' ' + word;
    word.clear();
    
    
  }
  cout << ans.substr(1) ;
  
}