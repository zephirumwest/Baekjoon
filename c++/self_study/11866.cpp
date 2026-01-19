#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N, k;
    cin >> N;
    cin >> k;
    int idx = k-1;
    vector<int> yo;
    vector<int> del;
    vector<int> ans;
    for(int i = 1; i < N+1; i++){
        yo.push_back(i);
    }
    while(yo.size() != 0){
        if(idx < yo.size()){
            del.push_back(yo[idx]);
            idx += k;
        }
        else{
            idx -= yo.size();
            for(int i = 0; i < del.size(); i++){
                yo.erase(remove(yo.begin(), yo.end(), del[i]), yo.end());
                ans.push_back(del[i]);
            }
            del.clear();
        }
    }
    cout << "<";
    for(int i = 0; i < N-1; i++){
        cout << ans[i] << ", ";
    }
    cout << ans[N-1];
    cout << ">";
    
}