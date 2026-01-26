#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, M; cin >> N; cin >> M;
    int card, chk;
    int goal = 0;
    vector<int> deck;
    for(int i = 0; i < N; i++){
        cin >> card;    
        deck.push_back(card);
    }
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                chk = deck[i] + deck[j] + deck[k];
                if(chk <= M && chk > goal){
                    goal = chk;
                }
            }
        }
    }
    cout << goal;
}