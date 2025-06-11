#include<iostream>

using namespace std;

int main(void){
    int n, S[100000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    int count = 0;
    int tmp;
    for(int i = 0; i < q; i++){
        int left = 0, right = n - 1;
        cin >> tmp;
        while(left <= right){
            int mid = (left + right) / 2;
            if(tmp == S[mid]) {
                count++;
                break;
            }
            else if(tmp > S[mid]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}