#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[1000];
    cin >> a;
    int repeated = 0;
    for (int i = 0; i < strlen(a); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < strlen(a) - 1; ++i)
    {
        if (a[i] == a[i + 1])
            repeated++;
    }
    if ((strlen(a) - repeated) % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else if ((strlen(a) - repeated) % 2 != 0)
        cout << "IGNORE HIM!\n";
    return 0;
}