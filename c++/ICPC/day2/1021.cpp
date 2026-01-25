#include<iostream>
#include<deque>
#include<cmath>

using namespace std;

int main(){ 
    int N, M; cin >> N; cin >> M;
    int ans = 0;
    deque<int> q;
    for(int i = 1; i < N+1; i++){
        q.push_back(i);
    }
    for(int i = 0; i < M; i++){
        int num; cin >> num;
        int j = 0;
        while(1){
            if(q.front() == num){
                if(j <= (N/2)){
                    ans += j;
                }
                else{
                    ans += (N-j);
                }
                q.pop_front();
                N--;
                break;
            }
            else{
                q.push_back(q.front());
                q.pop_front();
                j++;
            }
        }
    }
    cout << ans;
}   