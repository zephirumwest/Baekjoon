#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;


int N, M, V;
vector<int> graph[1001];
bool visited[1001];

void dfs(int v){
    visited[v] = true;
    cout << v << " ";
    for(int next : graph[v]){
        if(!visited[next]){
            dfs(next);
        }
    }
}

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";

        for(int next : graph[v]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main(){
    cin >> N >> M >> V;

    for(int i = 0; i < M; i++){
        int a , b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <=N; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << "\n";

    fill(visited, visited + 1001, false);
    bfs(V);
}