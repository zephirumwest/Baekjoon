#include<iostream>
#include<vector>
#include <limits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N,M,B; cin >> N >> M >> B;
    int size = N*M;
    int max = 0, min = 256;
    int ans = std::numeric_limits<int>::max();
    int height;
    vector<int> mk;

    for(int i = 0; i < size; i++){
        int k; cin >> k;
        mk.push_back(k);
        if(k>max) max = k;
        if(k<min) min = k;
    }

    for(int i = min; i <= max; i++){
        int result = 0;
        int check = 0;
        int inven = B;
        vector<int> ground = mk;
        for(int j = 0; j < size; j++){
            if(ground[j] > i){
                result += 2*(ground[j]-i);
                inven += (ground[j]-i);
                ground[j] = i;
            }
            else if(ground[j] < i){
                result += (i-ground[j]);
                check += (i-ground[j]);
                ground[j] = i;
            }
        }
        if(inven >= check and result <= ans){
            ans = result;
            height = i;
        }
    }
    cout << ans << " " << height;
}