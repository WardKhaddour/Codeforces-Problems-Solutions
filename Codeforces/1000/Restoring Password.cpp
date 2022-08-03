#include <bits/stdc++.h>

using namespace std;

int main()
{
    string pas;
    cin >> pas;
    string pasNums[10];
    for(int i = 0;i < 8; ++i){
        pasNums[i] = pas.substr(i * 10 ,10);
    }
    map <string,int> nums;
    map <string,int> :: iterator it;
    for (int i = 0;i < 10;++i){
        string num;
        cin >> num;
        nums[num] = i;
    }
    for(int i = 0;i < 10 ;++i){
        it = nums.find(pasNums[i]);
        if(it != nums.end()){
            cout << it->second;
        }

    }
    return 0;
}
