#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char s[256];
  cin.getline(s,256);
  s[0]=s[0]-32;
  s[strlen(s)-1]=s[strlen(s)-1]-32;
  for (int i=0; s[i]!=NULL; i++)
  {
      if (s[i]>='a' && s[i] <='z')
      {
      if (s[i+1]==' ' || s[i-1]==' ')
          s[i]=s[i]-32;

      }

  }
  cout<<s;
}
