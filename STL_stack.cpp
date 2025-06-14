#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;

int main(void){
    stack<int> S;
    int a, b, x;
    string s;
    while(cin >> s){
        if( s[0] == '+') {
            b = S.top(); S.pop();
            a = S.top(); S.pop();
            S.push(a + b);
        }
        else if( s[0] == '-') {
            b = S.top(); S.pop();
            a = S.top(); S.pop();
            S.push(a - b);
        }
        else if( s[0] == '*') {
            b = S.top(); S.pop();
            a = S.top(); S.pop();
            S.push(a * b);
        }
        else{
            S.push(stoi(s));
        }
    }
    cout << S.top() << endl;

    return 0;
}