#include <stdio.h>

int main() {
    int s[3], i;
    int cnt1, cnt2, cnt4;
    int a=0;

    cnt1 = cnt2 = cnt4 = 0;

    scanf("%d:%d:%d", &s[0], &s[1], &s[2]);

    for (i = 0; i < 3; i++) {
        if (s[i] == 0) cnt1++;
        else if (s[i] > 12 && s[i] < 60) cnt1++;
        else if (s[i] >= 1 && s[i] <= 12) cnt2++;
        else cnt4++;
    }

    if (cnt2 >= 1) {
        if (cnt4 >= 1) a = 0;
        else a = cnt2 * 2;
    }
    else a = 0;

    printf("%d", a);
    
    return 0;
}
