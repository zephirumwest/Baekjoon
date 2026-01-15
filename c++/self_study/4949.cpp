#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s;
    while(1){
        getline(cin, s);
        if(s == "."){
            break;
        }
        stack<char> st;
        bool ok = true;
        for(char c : s){
            if(c == '(' or c == '['){
                st.push(c);
            }
            else if(c == ')'){
                if (st.empty() || st.top() != '(') {
                    ok = false; break;
                }
                st.pop();
            }
            else if(c == ']'){
                if (st.empty() || st.top() != '[') {
                    ok = false; break;
                }
                st.pop();
            }
        }
        if (!st.empty()) ok = false;
        cout << (ok ? "yes\n" : "no\n");
    }
}