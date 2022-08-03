#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int aCount = 0,bCount = 0;
    for(int i = 0; i < n; ++i)
    {
        if(aCount < 2)
        {
            cout << 'a';
            aCount++;
        }
        else
        {
            cout << 'b';
            bCount ++;
            if(bCount == 2)
            {
                aCount = 0;
                bCount = 0;
            }
        }
    }
    return 0;
}
