#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    char word[101];
    char realWord[101];
    int i,cnt=0;
    
    scanf("%s", input);
    scanf("%s", word);
    
    for (i = 0; i < strlen(input); i++) {
        if (input[i] < 48 || input[i] >57)
            realWord[cnt++] = input[i];
    }
    
    realWord[cnt] = NULL;
    
    if (strstr(realWord,word) != NULL) printf("1");
    else printf("0");
}
