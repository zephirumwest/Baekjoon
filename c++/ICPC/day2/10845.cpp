#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, k;
    int size = 0;
    cin >> N;
    string od;
    vector<int> q;
    for(int i = 0; i < N; i++){
        cin >> od;
        if(od == "push"){
            cin >> k;
            q.push_back(k);
            size++;
        }
        else if (od == "pop"){
            if(size == 0){
                cout << -1 << "\n";
            }
            else{
                cout << q[0] << "\n";
                q.erase(q.begin());
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
                cout << q[0] << "\n";
            }
        }
        else if(od == "back"){
            if(size == 0){
                cout << -1 << "\n";
            }
            else{
                cout << q[size-1] << "\n";
            }
        }
        
    }
}