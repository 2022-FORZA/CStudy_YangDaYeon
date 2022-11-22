#include <stdio.h>

int main(void){
    int score = 0;
    int arr[10] = { 0, };
    int i = 0;
    int a = 0, b = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        a = 100 - score;
        b = 100 - (score + arr[i]);
        if (a < 0) {
            a *= -1;
        }
        if (b < 0) {
            b *= -1;
        }
        if (a >= b) {
            score += arr[i];
        }
        else{
            break;
        }
    }
    printf("%d", score);
    return 0;
}
