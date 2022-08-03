#include <iostream>
using namespace std;
int main()
{
    int x , counter = 0;
    cin >> x;
    while(x / 2 != 0){
        if(x % 2 == 1){
            counter++;
        }
        x /= 2;
    }
    cout << counter + 1 << endl;
    return 0;
}
