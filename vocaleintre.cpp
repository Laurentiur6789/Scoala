#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256],v[6];
    int cnt=0;
    strcpy(v,"aeiou");
    cin.getline(s,256);
    for (int i=1; i<strlen(s)-1; ++i)
    {
        if (strchr(v,s[i-1])==NULL && strchr(v,s[i+1])==NULL && strchr(v,s[i])!=NULL && s[i+1]!=' ' && s[i-1]!=' ')
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
