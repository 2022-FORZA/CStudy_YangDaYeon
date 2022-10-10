#include<stdio.h>

int main(){
    int n, classnum[1001][6], check[1001], score[1001] = {0, }, max = 0;
    int i, k, j;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        for(j=0; j<5; j++) scanf("%d", &classnum[i][j]);
    }
    
    for(i=0; i<n; i++){
        for(k=0; k<n; k++) check[k] = 0;
        for(j=0; j<5; j++){
            for(k=0; k<n; k++) {
                if(i != k && classnum[i][j] == classnum[k][j]) check[k] = 1;
            }
        }
        
        for(k=0; k<n; k++){
            if(check[k]) score[i]++;
        }
        if(score[i] > max) max = score[i];
    }
    for(i=0; i<n; i++){
        if(score[i] == max) {
            printf("%d", i+1);
            return 0;
        }
    }
}
