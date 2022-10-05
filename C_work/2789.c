#include <stdio.h>

int main(){
    
    char str[100] = " ";
    int length, i, j;
    
    scanf("%s", str);
    
    length = sizeof(str) / sizeof(str[0]);
    
    for(i = 0; i < length; i++){
        
        if(str[i] == 'C' || str[i] =='A' || str[i] =='M' || str[i] =='B' || str[i] =='R' || str[i] =='I' || str[i] =='D' || str[i] =='G' || str[i] =='E' ){
            
            str[i] = '\0';
            
        }
        
    }
    
    for(i = 0; i < length; i++){
        
        if(str[i] != '\0'){
            
            printf("%c", str[i]);
        }
        
        else{
            
        }
        
    }
    
}
