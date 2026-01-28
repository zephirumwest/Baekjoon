#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    vector<int> num(N+1, 1);
    vector<int> prime;
    num[1] = 0;
    for(int i = 2; i <= N; i++){
        int j = 2;
        if(num[i] == 1){
            prime.push_back(i);
            while(i*j <= N){
                num[i*j] = 0;
                j++;
            }
        }
    }
    int k = 0;
    while(N>1){
        if(N%prime[k] == 0){
            cout << prime[k] << "\n";
            N /= prime[k];
        }
        else{
            k++;
        }
    }
    
}