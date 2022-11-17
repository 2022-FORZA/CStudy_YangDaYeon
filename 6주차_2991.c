#include <stdio.h>

int main() {
    int a, b, c, d;
    int arr[3];
    int ans[3] = { 0,};
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i=0; i<3; i++) {
        scanf("%d", &arr[i]);
        int dog1 = arr[i] % (a + b);
        int dog2 = arr[i] % (c + d);
        if (dog1 <= a && dog1 != 0) ans[i]++;
        if (dog2 <= c && dog2 != 0) ans[i]++;
    }
    for (int i=0; i<3; i++)
        printf("%d\n", ans[i]);
}

