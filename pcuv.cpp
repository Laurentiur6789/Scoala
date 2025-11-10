#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[21];
    cin.getline(s, 21);

    int ok1 = 0, ok2 = 0;
    int p1, p2;
    char temp1, temp2;

    
    for (int i = strlen(s) - 1; i >= 0; --i) {
        if (strchr("aeiouAEIOU", s[i]) != NULL) {
            temp1 = s[i];
            p1 = i;
            ok1 = 1;
            break;
        }
    }

    
    for (int i = 0; i < strlen(s); ++i) {
        if (strchr("bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ", s[i]) != NULL) {
            temp2 = s[i];
            p2 = i;
            ok2 = 1;
            break;
        }
    }

    if (ok1 && ok2) {
        s[p1] = temp2;
        s[p2] = temp1;
        cout << s;
    } else {
        cout << "IMPOSIBIL";
    }
}
