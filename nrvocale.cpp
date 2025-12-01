#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[12],v[12];
    int indice1, indice2;
    indice1=-1;
    indice2=-1;
    cin.getline(s,12);
    strcpy(v,"AEIOUaeiou");
    for (int i=0; i<strlen(s)-1; ++i)
    {
        if (strchr(v,s[i])!=NULL)
        {

        indice1=i;
        break;
        }

    }
    for (int i=strlen(s)-1; i>=0; --i)
    {
        if (strchr(v,s[i])==NULL)
        {

            indice2=i;
            break;
        }
    }
    if (indice1==-1 || indice2==-1)
    {
        cout<<"IMPOSIBIL";
    }
    else{
    char temp=s[indice1];
    s[indice1]=s[indice2];
    s[indice2]=temp;
    cout<<s;
    }

    return 0;
}
