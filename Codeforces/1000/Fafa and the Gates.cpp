#include <iostream>

using namespace std;
int main()
{
    int n, coinsCount = 0;
    cin >> n;
    pair <int,int> pos;
    pos.first = 0;
    pos.second = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        if(s[i] == 'U')
        {
            pos.second ++;
        }
        else if (s[i] == 'R')
        {
            pos.first ++;
        }
        if((pos.first == pos.second) && s[i] == s[i + 1])
        {
            coinsCount ++;
        }
    }
    cout << coinsCount << endl;
    return 0;
}
