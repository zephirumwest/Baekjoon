#include<iostream>
#include<deque>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N; cin >> N;
    int T; cin >> T;
    deque<int> apt;
    for(int i = 0; i < N*2; i++){
        int num; cin >> num;
        apt.push_back(num);
    }
    for(int i = 0; i < T; i++){
        int num; cin >> num;
        for(int j = 0; j < num-1; j++){
            apt.push_back(apt.front());
            apt.pop_front();
        }
        cout << apt.front() << " ";
    }
}