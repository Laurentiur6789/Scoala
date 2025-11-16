#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[21],c[21];
    int n, nr;
    cin>>n;
    cin.ignore();
    nr=0;
    cin.getline(c,21);
    for (int i=2; i<=n; i++)
    {
        cin.getline(s,21);

      if(strcmp(s+strlen(s)-strlen(c),c)==0)
        {
            nr++;
        }
    }
    cout<<nr;
}
