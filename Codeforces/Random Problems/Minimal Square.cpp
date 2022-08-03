#include <iostream>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        int mn = a < b?a*2:b*2;
        int mx = a > b?a:b;
        mn = mn < mx ? mx:mn;
        cout<< mn*mn << endl;
    }
    return 0;
}