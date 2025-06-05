#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int N, K;
    cin >> N >> K;
    vector<int> A;
    int tmp;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        A.push_back(tmp);
    }
    K %= N; // N > Kの時でも無駄な計算をしないで済む
    for(int i = 0; i < K; i++){
        A.push_back(A[0]);
        A.erase(A.begin());
    }
    
    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    
}