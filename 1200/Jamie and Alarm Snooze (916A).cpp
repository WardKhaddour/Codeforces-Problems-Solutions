#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
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



int32_t main(){
	fastread();
	int x, h, m, c(0);
	cin >> x >> h >> m;
	while(m % 10 != 7 &&  h % 10 != 7){
		if((m - x) >= 0)
			m -= x;
		else {
			m = 60 + m - x;
			if((h - 1) > 0) h--;
			else 
				h = 24 + h - 1;

		}
		c++;
	}

	cout << c;
	return 0;
}

