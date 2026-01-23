#include<iostream>
#include<vector>

using namespace std;

int main(){
    int x, has;
    cin >> x;
    if(x==64){
        cout << 1;
        return 0;
    }
    vector<int> stick;
    stick.push_back(64);
    int i = 0;
    while(1){
        has = stick[i]/2;
        int sum = 0;
        int count = 0;
        stick[i] = has;
        stick.push_back(has);
        i++;
        for(int j = 0; j < i; j++){
            sum += stick[j];
            count++;
            if(sum == x){
                cout << count;
                return 0;
            }
            else if(sum >= x){
                sum -= stick[j];
                count--;
            }
        }
    }
}