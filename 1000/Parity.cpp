#include <iostream>

using namespace std;

int main()
{
    int b, k;
    cin >> b >> k;
    int a[k];
    for(int i = 0;i < k; ++i){
        cin >> a[i];
    }
    int pow = 1, sum = 0;
	  for (int i = k - 1; i >= 0; i--) {
	    sum = ( sum + pow * a[i] ) % 2;
	    pow = ( pow * b ) % 2;
	  }
	  if( sum%2 == 0 )
		cout << "even\n";
	  else
		cout << "odd\n";

    return 0;
}
