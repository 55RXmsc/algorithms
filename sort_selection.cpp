#include<iostream>
using namespace std;
static const int MAX = 100;

int main(void){
    int count = 0, min, N, A[MAX];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    for(int i = 0; i < N; i++){
        min = i;
        for(int j = i + 1; j < N; j++){
            if(A[min] > A[j]){
                min = j;
            }
        }
        if(min != i){
            swap(A[min], A[i]);
            count++;
        }
    }

    for(int i = 0; i < N; i++) cout << A[i] << ' ';
    cout << endl;
    cout << count << endl;
    return 0;
}