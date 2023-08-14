#include <stdio.h>

int main(){
  int cont = 0;

  for(int i = 0; i <= 127; i ++){
    cont ++;
       if(cont == 10){
     printf("\n");
         printf("%c ", i);
     cont = 0;
   }else{
    printf("%c ", i);
   }
}return 0;
}
