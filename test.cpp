#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;


int main(void){
    int Rs[MAX], n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> Rs[i];
    }
    int maxv = -2000000000;
    int minv = Rs[0];

    for(int i = 1; i < n; i++){
        maxv = max(maxv, Rs[i] - minv);
        minv = min(minv, Rs[i]);
    }

    cout << maxv << endl;

    return 0;
}