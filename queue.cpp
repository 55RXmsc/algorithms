#include<iostream>
using namespace std;
static const int LEN = 100005;

struct Process{
    char name[100];
    int time;
};

Process Q[LEN];
int head, tail, n;

void enqueue(Process x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

Process dequeue(void){
    Process x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int main(void){
    int elaps = 0, c;
    int quantum;
    Process cur;
    cin >> n >> quantum;
    for(int i = 1; i <= n; i++){
        cin >> Q[i].name;
        cin >> Q[i].time;
    }
    head = 1;
    tail = n + 1;

    while( head != tail){
        cur = dequeue();
        c = min(quantum, cur.time);
        cur.time -= c;
        elaps += c;
        if(cur.time > 0) enqueue(cur);
        else{
            cout << cur.name << ' ' << elaps << endl;
        }
    }

    return 0;
}