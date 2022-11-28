#include <stdio.h>

int main(){
    int N, s, d, M=0, a, cnt=0;
    scanf("%d,", &N);
    
    s = N / 10;
    d = N % 10;
    
    if (N == 0) printf("1");
    else{
        while (M != N) {
            a = (s + d) % 10;
            M = 10 * d + a;
            cnt++;
            s = M / 10;
            d = M % 10;
        }
        printf("%d", cnt);
    }

}
