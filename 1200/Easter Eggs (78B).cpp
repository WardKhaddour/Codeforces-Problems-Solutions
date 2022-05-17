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
	int n;
	cin >> n;
	string colors = "ROYGBIV";
	cout << colors;
	n -= 7;
	int i = 3;
	while(n > 0){
		if(i == 7) i = 3;
		cout << colors[i];
		n--;
		i++;
	}
	return 0; 
}
