#include <bits\stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    char a = 'a';
    int sum = 0;
    for (int i = 0; i < name.length(); ++i)
    {
        int l1 = abs(name[i] - a);
        int l2 = 26 - abs(l1);
        sum += min(l1, l2);
        a = name[i];
    }
    cout << sum;
    return 0;
}