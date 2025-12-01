#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[12];
    cin.getline(s,12);
    for (int i=strlen(s); i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
             cout<<s[j];
        }
        cout<<endl;
    }
        for (int i=0; i<=strlen(s)-1; i++)
    {
        for (int j=i; j<strlen(s); j++)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
//yeyeyye
