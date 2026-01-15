#include<iostream>
#include<queue>

using namespace std;

int main(){
    int N;
    int M, idx, n;
    cin >> N;
    for(int i = 0; i < N; i++){
        int select = 0;
        queue<int> q;
        priority_queue<int> pq;
        cin >> M;
        cin >> idx;
        for(int j = 0; j < M; j++){
            cin >> n;
            q.push(n);
            pq.push(n);
        } 
        while(1){
            if(q.front() == pq.top()){
                if(idx == 0){
                    cout << select+1 << "\n";
                    break;
                }
                q.pop();
                pq.pop();
                select++;
                idx--;
            }
            else{
                q.push(q.front());
                q.pop();
                if(idx == 0){
                    idx += (q.size()-1);
                }
                else{
                    idx--;
                }
            }
        }

    }
}