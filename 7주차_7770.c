#include <stdio.h>

int main(void){
  int n, t1=0, t2=0;
    
  scanf("%d", &n);
    
  for (int i=0; i<10000000; i++){
    t1 += (i*i)+(i+1)*(i+1);
    t2 += (i+1)*(i+1)+(i+2)*(i+2);
    if (n>=t1 && n<=t2){
      printf("%d\n", i+1);
      break;
      }
  }
}
