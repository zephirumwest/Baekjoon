#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, M, A, B;
    cin >> N >> M;
    vector<int> friends;
    for(int i = 0; i < N; i++){
        friends.push_back(0);
    }
    for(int i = 0; i < M; i++){
        cin >> A >> B;
        friends[A-1]++;
        friends[B-1]++;
    }
    for(int i = 0; i < N; i++){
        cout << friends[i] << "\n";
    }

}