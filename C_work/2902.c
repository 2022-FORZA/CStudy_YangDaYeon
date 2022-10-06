#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(){
    char str[100];
    int i,l;
    
    gets(str);
    
    l=strlen(str);
    
    for(i=0; i<l; i++){
        if(str[i] > 64 && str[i] < 91)
            continue;
        else
            str[i] = '1';
    }
    for(i=0; i<l; i++){
        if(str[i] != '1'){
            printf("%c",str[i]);
        }
    }
}
