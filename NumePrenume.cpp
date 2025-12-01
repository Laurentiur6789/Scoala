#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char n[21],p[21],v[12],t[21],g[42];
    cin>>n;
    cin>>p;

    strcpy(v,"aeiouAEIOU");
    for (int i=0; i<strlen(p); ++i)
    {
        if (strchr(v,p[i])!=NULL)
        {
            //algoritm de eliminare
            strcpy(t,p+i+1);
            strcpy(p+i,t);
            i--;
        }
    }
    strcpy(g,p);
    strcat(g," ");
    strcat(g,n);
    cout<<g;
    return 0;
}
//nota pentru sine, ai grija cu dimensiunile, ca strica multe daca le gresesti
