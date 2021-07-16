#include <stdio.h>
#include <stdlib.h>
 
    int main(){
    int mat[3][3];
    int i, j;
 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o elemento da linha %d, coluna %d (mat[%d][%d]): ", i + 1, j + 1, i, j);
            scanf("%d", &mat[i][j]);
         }
      }
 
     for(i = 0; i < 3 ; i++){
         printf("\n");
        for(j = 0; j < 3; j++){
              if(i == j){
                      printf("%d ", mat[i][j]);
              } else {
                      printf("0 ");
              }
           }
        }
   printf("\n");
}
