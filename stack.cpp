#include<iostream>
using namespace std;


static const int MAX = 1000;
int top, stack[MAX];
inline void init (void) {top = 0;}
inline bool isEmpty(void) {return top == 0;}
inline bool isFull(void) {return top >= MAX - 1;}
void push(int x);
int pop(void);

int main (void){
    int a,b;
    char s[100];
    init();
    while(cin >> s){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(b + a);
        }
        else if(s[0] == '-'){
            a = pop();
            b = pop();
            push(b - a);
        }
        else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(b * a);
        }
        else{
            push(atoi(s));
        }
    }
    cout << pop() << endl;
    return 0;
}

void push(int x){
    if(isFull()) cout << "stack is full\n";
    top++;
    stack[top] = x;
}
int pop(void){
    if(isEmpty()) cout << "stack is empty\n";
    top--;
    return stack[top + 1];
}

