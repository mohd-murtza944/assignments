#include<stdio.h>
#include<stdlib.h>

void transpose(int mat[][3], int mat2[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      mat2[i][j] = mat[j][i];
}
int main()
{
 int mat[3][3]; 
        int i,j; 
        scanf("Enter Elements of Matrix\n"); 
        for(i=0;i<3;i++) 
               { 
                      for(j=0;j<3;j++ ) 
                         { 
                              scanf("%d",&mat[i][j]); 
                          } 
                }
                
      printf("matrix before transposing : \n ");
  for (i = 0; i <3 ; i++)
  {
    for (j = 0; j < 3; j++){
                printf("%d ",mat[i][j]);
                }
                printf("\n");
  }
 int mat2[3][3];
  transpose(mat, mat2);

     
  printf("matrix after transposing :\n"); 
  for (i = 0; i <3 ; i++)
  {
    for (j = 0; j < 3; j++){ 
      printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }
   
  return 0;
}