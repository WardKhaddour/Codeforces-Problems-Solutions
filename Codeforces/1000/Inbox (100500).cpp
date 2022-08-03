#include <iostream>

using namespace std;

int main()
{
    int n, current, previous = 0, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current == 1)
            counter++;
        else if (previous == 1)
            counter++;
        previous = current;
    }

    counter += previous;
    if (counter > 0)
        cout << counter - 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
