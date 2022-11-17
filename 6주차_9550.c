#include <stdio.h>

int main(){
    int t,n,k,c;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d %d",&n,&k);
        int count = 0;
        for(int j=0; j<n; j++){
            scanf("%d",&c);
            count += c/k;
        }
        printf("%d\n",count);
    }
    return 0;
}

