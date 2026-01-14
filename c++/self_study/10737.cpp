#include<iostream>
#include<stack>

using namespace std;

int main(){
    int K, num;
    cin >> K;
    stack<int> nstack;
    for(int i = 0; i < K; i++){
        cin >> num;
        if(num == 0){
            nstack.pop();
        }
        else{
            nstack.push(num);
        }
    }
    int sum = 0;
    while(!nstack.empty()){
        sum += nstack.top();
        nstack.pop();
    }
    cout << sum;
}