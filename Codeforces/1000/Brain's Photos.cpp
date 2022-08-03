#include <iostream>

using namespace std;

int main()
{
    char a;
    int n, m;
    bool colored = false;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> a;
            if(a == 'C' || a == 'M' || a == 'Y')
            {
                colored = true;
                break;
            }
        }
    }

    colored ? cout <<"#Color" : cout << "#Black&White";
    return 0;
}
