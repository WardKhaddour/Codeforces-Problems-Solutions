#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm> // for sort function

using namespace std;

bool sortByVal(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int numberOfCans; //n
    cin >> numberOfCans;
    int a[numberOfCans];
    map <int,int> c;
    for (int i = 0; i < numberOfCans; ++i)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    vector<pair<int, int> > vec;
    map<int, int> :: iterator it;
    for (it=c.begin(); it!=c.end(); it++)
    {
        vec.push_back(make_pair(it->first, it->second));
    }
    sort(vec.begin(), vec.end(), sortByVal);
    int knockedCans = 0; //x
    int res = numberOfCans == 0 ? 0 : 1;
    for (int i = numberOfCans - 2; i >= 0 ; --i)
    {
        knockedCans ++;
        res += knockedCans * vec[i].second + 1;
    }
    cout << res << endl;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i].first + 1 << " ";
    }
    return 0;
}
