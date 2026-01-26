#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 

    int M, N; cin >> M >> N;
    vector<int> v(N+1, 1);
    vector<int> p;
    v[1] = 0;
    for(int i = 2; i <= N; i++){
        int k = 2;
        if(v[i]){
            p.push_back(i);
            while(1){
                if(i*k > N) break;
                v[i*k] = 0;
                k++;   
            }
        }
    }
    for(int i : p){
        if(i >= M){
            cout << i << "\n";
        }
    }

}