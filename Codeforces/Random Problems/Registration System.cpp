#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> name;
    int n;
    cin >> n;
    string arry[n];
    for (int i = 0; i < n; i++)
    {
        string m;
        cin >> m;
        arry[i] = m;
    }
    for (int i = 0; i < n; i++)
    {
        if (!name.count(arry[i]))
        {
            name[arry[i]] = 0;
            cout << "OK" << endl;
        }

        else
            cout << arry[i] << ++name[arry[i]] << endl;
    }
    return 0;
}