#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

// 카드를 key로 활용해서 쫙 받은 뒤에 value를 0으로 설정
// 이미 key가 있는 경우는 value++
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int N, M, card;
    cin >> N;
    unordered_map<int, int> list;
    list.reserve(500000);
    list.max_load_factor(0.7);
    for(int i = 0; i < N; i++){
        cin >> card;
        list[card]++;
    }
    
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> card;
        cout << list[card] << " ";

    }
}