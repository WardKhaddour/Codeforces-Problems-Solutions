#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int b[100];
    int j = 0;
    for (int i = 0; i < strlen(a); ++i)
    {
        if (a[i] == '1')
        {
            b[j] = 1;
            j++;
        }
        else if (a[i] == '2')
        {
            b[j] = 2;
            j++;
        }
        else if (a[i] == '3')
        {
            b[j] = 3;
            j++;
        }
    }
    for (int i = 0; i < j; ++i)
    {
        for (int k = 0; k < i; ++k)
        {
            if (b[i] < b[k])
                swap(b[i], b[k]);
        }
    }
    for (int i = 0; i < j - 1; ++i)
    {
        cout << b[i] << '+';
    }
    cout << b[j - 1];
    return 0;
}