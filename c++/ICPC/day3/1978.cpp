#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int num;
    int ans = 0;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(num == 1){
            ans++;
        } 
        for(int i = 2; i*i <= num; i++){
            if(num % i == 0){
                ans++;
                break;
            }
        }
    }
    cout << N - ans;
}