#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char word[100];
    for (int i = 0; i < n; ++i)
    {
        cin >> word;
        if (strlen(word) > 10)
            cout << word[0] << strlen(word) - 2 << word[strlen(word) - 1] << endl;
        else
            cout << word << endl;
    }
    return 0;
}