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

    for(int i = 1; i < N; i++){
       tmp = A[i];
       int j = i - 1;
       for(;j >= 0 && A[j] > tmp; j--){
            A[j+1] = A[j];
       }
       A[j+1] = tmp;
       printarray(A, N);
    }
    printarray(A, N);
    return 0;
}