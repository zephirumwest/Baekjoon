#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, k;
    int size = 0;
    cin >> N;
    string od;
    vector<int> dq;
    for(int i = 0; i < N; i++){
        cin >> od;
        if(od == "push_front"){
            cin >> k;
            dq.insert(dq.begin(), k);
            size++;
        }
        else if(od == "push_back"){
            cin >> k;
            dq.push_back(k);
            size++;
        }
        else if (od == "pop_front"){
            if(size == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq[0] << "\n";
                dq.erase(dq.begin());
                size--;
            }
        }
        else if (od == "pop_back"){
            if(size == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq[size-1] << "\n";
                dq.pop_back();
                size--;
            }
        }
        else if(od == "size"){
            cout << size << "\n";
        }
        else if(od == "empty"){
            if(size == 0) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(od == "front"){
            if(size == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq[0] << "\n";
            }
        }
        else if(od == "back"){
            if(size == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq[size-1] << "\n";
            }
        }
        
    }
}