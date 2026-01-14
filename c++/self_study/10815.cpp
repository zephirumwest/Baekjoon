#include<iostream>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, card, get;
    unordered_set<int> list;
    list.reserve(500000);
    list.max_load_factor(0.7);

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> card;
        list.insert(card);
    }
    
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> get;
        if(list.find(get) != list.end()){
            cout << 1 << " ";
        }
        else{
            cout << 0 << " ";
        }
    }
}