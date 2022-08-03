#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,m;
    cin >> n >> m;
    map <string,string> words;
    string s , s1 , s2;
    for (int i = 0;i < m ;++i){
        cin >> s1 >> s2;
        if(s1.length() <= s2.length()){
            words[s1] = s1;
        }
        else
            words[s1] = s2;
    }
    for (int i = 0; i < n ; ++i){
        cin >> s;
        cout << words[s] << " ";
    }
    return 0;
}
