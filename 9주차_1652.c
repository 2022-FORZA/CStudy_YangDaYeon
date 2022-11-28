#include <stdio.h>

int main(void) {
    char room[101][101];
    int n=0;
    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++){
        scanf("%s", room[i]);
        getchar();
    }
    int okay=0;
    int bad=0;
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(room[i][j]=='X'){
                if(count>1){
                    okay++;
                }
                count=0;
                continue;
            }
            else if(room[i][j]!='X'&&j==n-1){
                count++;
                if(count>1){
                    okay++;
                }
                count=0;
                continue;
            }
            count++;
        }if(okay>=1){
            bad+=okay;
            okay=0;
        }
    }
    int r = bad;
    okay=0;
    bad=0;
    count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(room[j][i]=='X'){
                if(count>1){
                    okay++;
                }
                count=0;
                continue;
            }
            else if(room[j][i]!='X'&&j==n-1){
                count++;
                if(count>1){
                    okay++;
                }
                count=0;
                continue;
            }
            count++;
        }if(okay>=1){
            bad+=okay;
            okay=0;
        }
    }
    printf("%d %d", r,bad);
}
