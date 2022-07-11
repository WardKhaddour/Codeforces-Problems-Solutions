#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    pair <int,int> pairs[n ];
    for (int i = 0;i < n;++i){
        cin >> a[i];
    }
    for(int i = 0;i < n;i ++){
        if(i != n - 1){
            pairs[i].first = a[i];
            pairs[i].second = a[i + 1];
        }else{
            pairs[i].first = a[i];
            pairs[i].second = a[0];
        }
    }
    int minPairs = abs(pairs[0].first - pairs[0].second);
    int minPairsIndex = 0;
    for (int i = 1;i < n;++i){
        if(abs(pairs[i].first - pairs[i].second) < minPairs){
            minPairs = abs(pairs[i].first - pairs[i].second);
            minPairsIndex = i;
        }
    }
    minPairsIndex == n - 1? cout << n - minPairsIndex << " " << minPairsIndex + 1
    :cout << minPairsIndex + 1<< " " << minPairsIndex + 2;
    return 0;
}
