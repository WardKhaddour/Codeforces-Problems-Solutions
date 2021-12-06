#include <iostream>
using namespace std;
int main()
{
    int n, i, counter = 1;
    cin >> n;
    int A[100000];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        if (A[i] != A[i + 1])
        {
            counter = counter + 1;
        }
    }
    cout << counter << endl;
}