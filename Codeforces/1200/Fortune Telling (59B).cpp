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
	int n, counter = 0;

	bool allEvens = true;

	vector <int> v;

	cin >> n;

	for(int i = 0;i < n; ++i){
		int x;
		cin >> x;
		counter += x;
		v.pb(x);
	}
	if(n == 1){
		if(v[0] % 2 == 1){
			cout << v[0] << endl;
		}
		else{
			cout << 0 << endl;
		}
		return 0;
	}
	if(counter % 2 == 1){
		cout << counter << endl;
		return 0;
	}
	for(auto i : v){
		if(i % 2 == 1){
			allEvens = false;
			break;
		}

	}
	if(allEvens){
		cout << 0 << endl;
		return 0;
	}
	sort(v.begin(), v.end(),sortReversed);
	while(counter % 2 != 1 && v.size() > 0){
		if(v.back() % 2 == 1){
			counter -= v.back();
		}
		v.pop_back();
	}
	cout << counter << endl;
	return 0; 
}
