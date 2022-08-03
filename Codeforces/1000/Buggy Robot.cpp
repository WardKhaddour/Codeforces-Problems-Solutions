#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, numberOfMoves = 0;
    string s;
    pair <int,int> currentPos;
    currentPos.first = 0;
    currentPos.second = 0;
    cin >> n >> s;
    for (int i = 0;i < n ;++i){
        if(s[i] == 'U'){
            currentPos.second++;
        }else if(s[i] == 'D'){
            currentPos.second--;
        }else if(s[i] == 'L'){
            currentPos.first--;
        }else if(s[i] == 'R'){
            currentPos.first++;
        }
        numberOfMoves++;

    }
    cout <<n - (abs(currentPos.first)+abs(currentPos.second));
    return 0;
}
