#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int N, M, a;
    cin >> N;
    unordered_set<int> A;
    for(int i = 0; i < N; i++){
        cin >> a;
        A.insert(a);
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> a;
        if(A.find(a) != A.end()){
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }


}