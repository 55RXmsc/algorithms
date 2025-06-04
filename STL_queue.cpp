#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int main(void){
    int n, q, t;
    string name;
    queue<pair<string, int>> Q;
    cin >> n >> q;
    for(int i = 0 ; i < n; i++){
        cin >> name >> t;
        Q.push(make_pair(name, t));
    }
    pair<string, int> tmp_pair;
    int sum = 0, tmp_time;
    while(!Q.empty()){
        tmp_pair = Q.front(); Q.pop();
        tmp_time = min(q, tmp_pair.second);
        sum += tmp_time;
        tmp_pair.second -= tmp_time;
        if(tmp_pair.second > 0){
            Q.push(tmp_pair);
        }
        else{
            cout << tmp_pair.first << ' ' << sum << endl;
        }
    }

    return 0;
}