#include<iostream>
using namespace std;

int main(void){
    int n;
    int S[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> S[i];
    int q;
    cin >> q;
    int search, C = 0;
    for(int i = 0; i < q; i++) {
        cin >> search;
        S[n] = search;
        int j = 0;
        while(S[j] != search) j++;
        if(j != n) C++;
    }
    cout << C << endl;

    return 0;
}