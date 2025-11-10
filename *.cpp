#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],s2[11],temp[202];
    int k=0;
    cin.getline(s,101);
    for (int i=0; i<=strlen(s)-1; ++i)
    {
        if (strchr("aeiouAEIOU",s[i])!=NULL)
        {
            strcpy(temp,s+i+1);
            {
                s[i+1]='*';
                strcpy(s+i+2, temp);
                i++;
                k++;

            }

        }
    }
    if (k==0)
    {
        cout<<"FARA VOCALE";
    }
    else
    {
        cout<<s;
    }
}
