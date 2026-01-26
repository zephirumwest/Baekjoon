#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int num;
    vector<int> dwarf;

    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> num;
        dwarf.push_back(num);
        sum += num;
    }
    int goal = sum - 100;
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if(dwarf[i] + dwarf[j] == goal){
                dwarf.erase(dwarf.begin()+j);
                dwarf.erase(dwarf.begin()+i);
            }
        }
    }
    for(int i = 0; i < 7; i++){
        cout << dwarf[i] << "\n";
    }
}