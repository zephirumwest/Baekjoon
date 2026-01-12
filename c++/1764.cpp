#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int N, M;
    string name;
    vector<string> heard;
    vector<string> seen;
    vector<string> ans;
    cin >> N;
    cin >> M;
    for(int i = 0; i < N; i++){
        cin >> name;
        heard.push_back(name);
    }
    for(int i = 0; i < M; i++){
        cin >> name;
        seen.push_back(name);
    }
    sort(heard.begin(), heard.end());
    sort(seen.begin(), seen.end());
    int j = 0;
    int k = 0;
    while (j < heard.size() && k < seen.size()){
        if(heard[j] == seen[k]){
            ans.push_back(heard[j]);
            j++;
            k++;
            
        }
        else if(heard[j] < seen[k]){
            j++;
        }
        else{
            k++;
        }
    }
    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << "\n";
    }
}