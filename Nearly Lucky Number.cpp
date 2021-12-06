#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[1000];
    cin >> a;
    int c = 0;
    for (int i = 0; i < strlen(a); ++i)
    {
        if (a[i] == '4' || a[i] == '7')
            c++;
    }
    if (c == 4 || c == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}