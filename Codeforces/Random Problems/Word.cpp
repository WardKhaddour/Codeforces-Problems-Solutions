#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char word[100];
    char s;
    int upper = 0, lower = 0;
    bool isUpper = false, isLower = false;
    cin >> word;
    for (int i = 0; i < strlen(word); ++i)
    {
        if (isupper(word[i]))
            upper++;
        else
            lower++;
    }
    if (lower < upper)
        isUpper = true;
    else
        isLower = true;
    for (int i = 0; i < strlen(word); ++i)
    {
        if (isUpper)
        {
            s = toupper(word[i]);
            cout << s;
        }
        else if (isLower)
        {
            s = tolower(word[i]);
            cout << s;
        }
    }
}
