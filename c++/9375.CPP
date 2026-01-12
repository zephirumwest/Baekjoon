#include<iostream>
#include<map>
using namespace std;

int main(){
    int C, n, ans;
    cin >> C;
    for(int i = 0; i < C; i++){
        cin >> n;
        string cloth, where;
        map<string,int> clothes;
        ans = 1;
        for(int i = 0; i < n; i++){
            cin >> cloth;
            cin >> where;
            if(clothes.find(where) != clothes.end()){
                clothes[where]++;
            }
            else{
                clothes.insert({where, 1});
            }
        }
        for(auto itr = clothes.begin(); itr != clothes.end(); ++itr){
            ans = ans * (itr->second + 1);
        }
        cout << ans - 1 << "\n";
    }
}


