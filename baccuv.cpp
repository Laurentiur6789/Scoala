#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p;
    int n;
    cin.getline(s,101);
    cin>>n;
    int nr=0;
    p=strtok(s," ");
    while (p!=NULL)
    {
        if (strlen(p)==n)
        {
            cout<<p<<endl;
        }
        p=strtok(NULL," ");
    }

    return 0;
}
