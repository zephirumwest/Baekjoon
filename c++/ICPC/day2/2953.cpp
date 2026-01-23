#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

int main(){
    int score;
    int arr[5] = {0,0,0,0,0};
    int max = 0;
    int idx;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> score;
            arr[i]+=score;
        }
        if(arr[i]>max){
            max = arr[i];
            idx = i+1;
        }
    }
    cout << idx << " " << max;


}