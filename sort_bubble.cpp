#include<iostream>
using namespace std;
const static int MAX = 100;

void printarray(int* A, int N){
    for(int i= 0; i < N; i++){
        cout << A[i] << ' ';
    }
    cout << '\n';
}

int main(void){
    int N, A[MAX];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    int count = 0;
    bool flag = true;
    for(int i = 0; i < N && flag == true; i++){
        flag = false;
        for(int j = 0; j < N - i - 1; j++){
            if(A[j] > A[j + 1]){
                swap(A[j], A[j+1]);
                count++;
                flag = true;
            }
        }
    }
    printarray(A, N);
    cout << count << endl;
}