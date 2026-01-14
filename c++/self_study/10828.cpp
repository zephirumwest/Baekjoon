#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, k;
    int pos = -1;
    string order;
    cin >> N;
    vector<int> stack;
    for(int i = 0; i < N; i++){
        cin >> order;
        if(order == "push"){
            cin >> k;
            stack.push_back(k);
            pos++;
        }
        else if(order == "pop"){
            if(pos == -1){
                cout << -1 << "\n";
            }
            else{
                cout << stack[pos] << "\n";
                stack.erase(stack.begin() + pos);
                pos--;
            }
        }
        else if (order == "size")
        {
            cout << stack.size() << "\n";
        }
        else if (order == "empty"){
            if(pos == -1){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(order == "top"){
            if(pos == -1){
                cout << -1 << "\n";
            }
            else{
                cout << stack[pos] << "\n";\
            }
        }
    }
}