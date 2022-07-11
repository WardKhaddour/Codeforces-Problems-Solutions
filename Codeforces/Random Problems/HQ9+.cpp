#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    bool test = false;
    char b[] = {'H', 'Q', '9'};
    for (int i = 0; i < strlen(a); ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (a[i] == b[j])
                test = true;
        }
    }
    if (test == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}