#include<iostream>
using namespace std;
static const int MAX = 36;

struct Card {
    char suit;
    int num;
};

Card* bubblesort(int N, Card* cards);
Card* selectionsort(int N, Card* cards);
bool suitscomp(int N, Card* cards1, Card* cards2);

int main(void){
    int N;
    Card cards1[MAX], cards2[MAX];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> cards1[i].suit >> cards1[i].num;
        cards2[i].suit = cards1[i].suit;
        cards2[i].num = cards1[i].num;

    }
    
    bubblesort(N, cards1);
    for(int i = 0; i < N; i++) {
        cout << cards1[i].suit << cards1[i].num << ' ';
    }
    cout << endl;
    cout << "Stable\n";

    selectionsort(N, cards2);
    for(int i = 0; i < N; i++) {
        cout << cards2[i].suit << cards2[i].num << ' ';
    }
    cout << endl;
    if(suitscomp(N, cards1, cards2)) cout << "Stable\n";
    else cout << "Not Stable\n";
    
    return 0;
}

Card* bubblesort(int N, Card* cards){
    for(int i = 0; i < N - 1; i++){
        for(int j = 1; j < N - i; j++){
            if(cards[j - 1].num > cards[j].num ) swap(cards[j - 1], cards[j]);
        }
    }
    return cards;
}

Card* selectionsort(int N, Card* cards){
    for(int i = 0; i < N - 1; i++){
        int min = i;
        for(int j = i + 1; j < N; j++){
            if(cards[min].num > cards[j].num) min = j;
        }
        if(min != i) swap(cards[i], cards[min]);
    }
    return cards;
}

bool suitscomp(int N, Card* cards1, Card* cards2){
    for(int i = 0; i < N; i++){
        if(cards1[i].suit != cards2[i].suit) return false;
    }
    return true;
}





