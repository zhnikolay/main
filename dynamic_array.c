#include <stdio.h>
#include <stdlib.h>

int main(void){
  int ** b;
  int * p;

  b = malloc(3 * sizeof(int*) + 3 * 4 * sizeof(int));
    printf("%lu\n\n", (3 * sizeof(int*)) + (3 * 4 * sizeof(int)));
  p = (int*)(b + 3);   
// присваиваем адреса указателям b[0], b[1], b[2]
  b[0] = p; 
  p = p + 4;
  b[1] = p;
  p = p + 4;
  b[2] = p;

  printf("\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){  
      b[i][j]=i,j;
      printf("%d%d ", i,j);
    }
    printf("  ");
   }
   printf("%d\n", b[2][3]);
   
   free(b);
 return 0;
}

