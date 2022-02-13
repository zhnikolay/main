#include <stdio.h>
#include <stdlib.h>

int main(void){
  int ** ppb; 
   
    ppb = malloc(3 * sizeof(int*)); // выделяем память под массив указателей
    printf("%lu\n\n", 3 * sizeof(int*)); 
    for(int i = 0; i < 3; i++){ // цикл перебора выделенной памяти под указатели
    ppb[i] = malloc(4 * sizeof(int)); // выделяем память для каждого отдельного одномерного массива 
    printf("%lu\n", 4 * sizeof(int));
    }
     printf("\n");  
     
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 4; j++){
        ppb[i][j] = i, j;
        printf("%d%d ", i, j);
      }
     printf("\n");     
    }
    printf("\nppb[2][3]: %d\n", ppb[2][3]);
     printf("\n"); 
    for(int i = 0; i < 3; i++)
      free(ppb[i]);

    free(ppb);
 return 0;
}      

