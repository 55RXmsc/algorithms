#include<iostream>
#include<list>
#include<string>
#include <algorithm>

using namespace std;
int main(void){
    int n;
    cin >> n;
    list<int> L;
    string s;
    int x;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "insert"){
            cin >> x;
            L.push_front(x);
        }
        else if(s == "delete"){
            cin >> x;
            auto it = find(L.begin(), L.end(), x);
            if(it != L.end()) L.erase(it);
        }
        else if(s == "deleteFirst"){
            L.pop_front();
        }
        else if(s == "deleteLast"){
            L.pop_back();
        }
        else{
            exit(1);
        }
    }
    for (auto it = L.begin(); it != L.end(); it++) {
        if(it != L.begin()) cout << " " << *it;
        else cout << *it;
    }
    cout << endl;
}