#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, tree;
    cin >> N;
    cin >> M;
    vector<int> list;
    for(int i = 0; i < N; i++){
        cin >> tree;
        list.push_back(tree);
    }

    sort(list.begin(), list.end(), compare);
    list.push_back(0);

    int i = 1;
    long long sum = 0;
    long long sum2;
    int size = (int)list.size();
    while(1){
        sum += list[i-1];
        sum2 = sum - ((long long)list[i] * (i));
        if(sum2 > M){
            if((sum - M) % i == 0){
                cout << (sum - M) / i;
            }
            else{
                cout << ((sum - M) / i);
            }   
            break;
        }
        else if(sum2 == M){
            cout << list[i];
            break;
        }
        i++;
    }
    
}