#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a == "Tetrahedron")
            c += 4;
        else if (a == "Cube")
            c += 6;
        else if (a == "Octahedron")
            c += 8;
        else if (a == "Dodecahedron")
            c += 12;
        else if (a == "Icosahedron")
            c += 20;
    }
    cout << c;
    return 0;
}