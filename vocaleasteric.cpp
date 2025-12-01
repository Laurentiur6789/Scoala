#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101],v[6],t[101];
    int nrvocale=0;
    strcpy(v,"aeiou");
    cin.getline(s,101);
    for (int i=0; i<strlen(s); ++i)
    {
        if (strchr(v,s[i])!=NULL)
        {
            //algoritmul de inserare
            strcpy(t,s+i);
            strcpy(s+i+1,t);
            s[i+1]='*';
            nrvocale++;
            i++;
        }
    }
    if (nrvocale==0)
    {
        cout<<"FARA VOCALE";
    }
    else
    {
            cout<<s;
    }

    return 0;
}
