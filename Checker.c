#include <stdio.h>

int f(int x) {
    return x * x;
};

int g(int x) {
    return x * x * x;
};

int main(){
    int x = 2;
    printf("x = %d ってするんだけど...\n", x);
    printf("Q,こいつは二乗して奇数になりますか？そうじゃなければ三乗した値ください \nA,そうですんね、%dですけんど？", x * x % 2 == 1 ? f(x) : g(x));
    printf("\nあと、冷たい水をください.できたらiしてください（複素数）.");
    Return:0;
}

//なぞ。//
