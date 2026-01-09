#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}
int main(){
    int N, age;
    string name;
    vector<pair<int, string>> list;
    cin >> N;
    for (int i = 0; i <N; i++){
        cin >> age;
        cin >> name;
        list.push_back(make_pair(age,name));
    }
    stable_sort(list.begin(), list.end(), compare);
    for(int i = 0; i < N; i++){
        cout << list[i].first << " ";
        cout << list[i].second << "\n";
    }
}