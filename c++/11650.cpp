#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, X, Y;
    cin >> N;
    vector<pair<int, int>> list;
    for(int i = 0; i < N; i++){
        cin >> X;
        cin >> Y;
        list.push_back(make_pair(X,Y));
    }
    stable_sort(list.begin(), list.end());

    for(int i = 0; i < N; i++){
        cout << list[i].first << " ";
        cout << list[i].second << "\n";
    }
}