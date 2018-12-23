
#include <iostream>
#include <string>
using namespace std;
bool isMatch( const string &text, const string &pattern )
{
  // your code goes here

  int i = 0,j = 0;
  char c = text[i];
  char p = pattern[j];
  while (c != '\0' && p != '\0')
  {
    cout << c;
    if(text[i] == pattern[i] || pattern[i] == '.')
    {
    i++;j++;
    }
    if (pattern[j] == '*')
    {
        cout << "got the star" << " Value of I is "<< i <<endl ;
        /*if(pattern[j+1] == '\0')
        {
            cout << "Just next value is null"<<endl ;
            return true;
        }*/
        while(pattern[j+1] != text[i] && text[i] != '\0')
        {
            cout << "NOT Match next pattern is" <<pattern[j+1] << "And text is" << text[i] <<endl ;
            i++;
        }
        while (pattern[j+1] == text[i] && text[i] != '\0')
        {
            cout << "Match next pattern is" <<pattern[j+1] << "And text is" << text[i] <<endl ;
            i++;
        }
        j += 2;
    }
    c = text[i];
    p = pattern[j];
  }
  if (c == '\0'&& p == '\0')
  {
    return true;
  }
  else
  {
  return false;
  }
}
int main()
{
    cout << isMatch("AABBA","*A");

    return 0;
}

