#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;  // input the number of teams
    int k = 0; // counter
    int a[100][100], b[100], c[100];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> a[i][j]; // input team's uniform colors
            b[i] = a[i][0]; // put the home uniform color in array
            c[i] = a[i][1]; // put the away uniform color in array
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (b[i] == c[j])
                k++; // comparing between home uniform and away uniform
        }
    }
    cout << k;
    return 0;
}