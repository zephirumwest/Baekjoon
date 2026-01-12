#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}

int main(){
    int N, X, Y;
    cin >> N;
    vector<pair<int,int>> list;

    for(int i = 0; i < N; i++){
        cin >> X;
        cin >> Y;
        list.push_back(make_pair(X,Y));
    }

    sort(list.begin(), list.end(), compare);

    for(int i = 0; i < N; i++){
        cout << list[i].first << " ";
        cout << list[i].second << "\n";
    }
}