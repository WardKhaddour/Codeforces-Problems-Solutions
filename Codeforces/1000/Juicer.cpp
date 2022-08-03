#include <iostream>

using namespace std;

int main()
{
    int n, b , d, m ;
    int j = 0;
    cin >> n >> b >> d;
    int a[n];
    for(int i = 0;i < n; ++i){
        cin >> m;
        if(m <= b){
            a[j] = m;
            j++;
        }
    }
    cout << "j = " << j << endl;
    int counter = 0;
    int sum = 0;
    for (int i = 0;i < j; ++i){
        sum += a[i];
        if(sum > d){
            counter++;
            sum = 0;
        }
    }
    cout << counter;
    return 0;
}
