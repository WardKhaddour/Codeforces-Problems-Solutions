#include <bits/stdc++.h>

#define ll long long int
#define F first
#define S second
#define pb push_back
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

using namespace std;


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

bool sortReversed(int &a, int &b){
	return a - b > 0;
}

int main(){
	ll r1, r2, c1, c2, d1, d2;

	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	int a, b, c, d;
/*
	r1 = a + b
	r2 = c + d
	c1 = a + c
	c2 = b + d
	d1 = a + d
	d2 = c + b
	r1 + c1 = 2 * a + b + c
	r1 + c1 - d2 = 2 * a
*/
	a = (r1 + c1 - d2) / 2;
	b = r1 - a;
	c = c1 - a;
	d = d1 - a;
	if(a > 0 &&
	 b > 0 &&
	 c > 0 &&
	 d > 0 &&
	 a < 10 &&
	 b < 10 &&
	 c < 10 &&
	 d < 10 &&
	 a != b &&
	 a != c &&
	 a != d &&
	 b != c &&
	 b != d &&
	 c != d &&
	 a + b == r1 &&
	 c + d == r2 &&
	 a + c == c1 &&
	 b + d == c2 &&
	 a + d == d1 &&
	 c + b == d2)
		cout << a << " " << b << endl << c << " " << d << endl;
	else cout << -1 << endl;
	return 0; 
}
	