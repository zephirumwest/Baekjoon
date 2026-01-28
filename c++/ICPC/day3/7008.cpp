#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N; 
    cin >> N;
    
    while(N--){
        int n; 
        cin >> n;
        
        string pw = "";
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            pw += c;
        }

        string crib; 
        cin >> crib;

        bool found = false;
        
        for(int s = 1; s <= 25 && !found; s++){
            string shifted_pw = pw;
            for(char &c : shifted_pw){
                int val = c - 'A' - s;
                while(val < 0) val += 26;
                c = val + 'A';
            }

            for(int m = 5; m <= 20; m++){
                string result = "";
                for(int k = 0; k < shifted_pw.size(); k += m){
                    int len = min(m, (int)shifted_pw.size() - k);
                    for(int j = k + len - 1; j >= k; j--){
                        result += shifted_pw[j];
                    }
                }
                
                if(result.find(crib) != string::npos){
                    cout << s << " " << m << "\n";
                    found = true;
                    break; 
                }
            }
        }
        if(!found) cout << "Crib is not encrypted." << "\n";
    }
    return 0;
}