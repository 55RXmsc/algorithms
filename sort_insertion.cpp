#include<iostream>
static const int MAX = 100;
using namespace std;

void printarray(int* A, int N){
    for(int i= 0; i < N; i++){
        cout << A[i] << ' ';
    }
    cout << '\n';
}
int main(void){
    int A[MAX], N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    printarray(A, N);
    for(int i = 1; i < N; i++){
       tmp = A[i];
       int j = i - 1;
       for(;j >= 0 && A[j] > tmp; j--){ // j>=0を先に書かないと負の要素にアクセスする可能性がある
            A[j+1] = A[j];
       }
       A[j+1] = tmp;
       printarray(A, N);
    }
    return 0;
}