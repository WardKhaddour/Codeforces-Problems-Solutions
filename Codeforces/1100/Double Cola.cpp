#include <bits/stdc++.h>

using namespace std;

int main(){
    string persons []={"Sheldon","Leonard","Penny", "Rajesh", "Howard"};
    int n;
    cin >> n;
    if(n <= 5){
        cout << persons[n - 1];
        return 0;
    }
    int m = 1;
    while(n > m * 5){
      n -= m * 5;
      m *= 2;
    }
    int index = n / m;
    cout << persons[index] ;
    return 0;
}
