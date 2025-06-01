#include<iostream>
#include<string>

struct Node{
    int key;
    Node *prev, *next;
};

Node *nil;

void init(){
    nil = new Node;
    nil->prev = nil;
    nil->next = nil;
}

void insertX(int x){
    Node* newnode = new Node;
    newnode->key = x;
    newnode->next = nil->next;
    nil->next->prev = newnode;
    nil->next = newnode;
    newnode->prev = nil;
}

Node* listSearch(int key){
    Node* cur = nil->next;
    while((cur->key != key) && (cur != nil)){
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node* t){
    if(t == nil) return;
    t->next->prev = t->prev;
    t->prev->next = t->next;
    delete t;
}

void deleteFirst(void){
    deleteNode(nil->next);
}

void deleteLast(void){
    deleteNode(nil->prev);
}

void deleteKey(int key){
    deleteNode(listSearch(key));
}

void printList() {
    Node* cur = nil->next;
    int spc = 0;
    while(1){
        if(cur == nil) break;
        if(spc++ > 0) std::cout << ' ';
        std::cout << cur->key;
        cur = cur->next;
    }
    std::cout << '\n';
}

int main() {
    int key, n;
    int size = 0;
    std::string com;
    int np = 0, nd = 0;

    std::cin >> n;
    init();

    for (int i = 0; i < n; i++) {
        std::cin >> com;

        if (com == "insert" || com == "delete") {
            std::cin >> key;
        }

        if (com == "insert") {
            insertX(key);
            np++;
            size++;
        } else if (com == "deleteFirst") {
            deleteFirst();
            size--;
        } else if (com == "deleteLast") {
            deleteLast();
            size--;
        } else if (com == "delete") {
            deleteKey(key);
            nd++;
            size--;
        }
    }

    printList();
    return 0;
}