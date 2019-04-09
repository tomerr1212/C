#include <stdio.h>
int *MatrixMulti(int m1, int m2, int mat1[][m2],int n1, int n2, int mat2[][n2]);


   int main() {
   int m1 , m2 , n1 , n2 ; 
  
   printf("Enter number of rows and columns of first matrix\n");
   scanf("%d%d", &m1, &m2);
   int mat1[m1][m2] ; 
   printf("Enter elements of first matrix\n");
     for (int i = 0; i < m1; i++)
        for (int j = 0; j < m2; j++)
             scanf("%d", &mat1[i][j]);
    
   printf("Enter number of rows and columns of second matrix\n");
   scanf("%d%d", &n1, &n2);
    if (m2 != n1)
    printf("The matrices can't be multiplied with each other.\n");
    else{
    int mat2[n1][n2] ; 
    printf("Enter elements of second matrix\n");
      for (int i = 0; i < n1; i++)
          for (int j = 0; j < n2; j++)
               scanf("%d", &mat2[i][j]);
    
    *MatrixMulti(m1, m2, mat1, n1, n2, mat2); 
    return 0; 
    }
 }

 
 int *MatrixMulti(int m1, int m2, int mat1[][m2],int n1, int n2, int mat2[][n2]){

    int x, i, j; 
    int res[m1][n2]; 
    for (i = 0; i < m1; i++) 
    { 
        for (j = 0; j < n2; j++) 
        { 
            res[i][j] = 0; 
            for (x = 0; x < m2; x++) 
            { 
                            
                res[i][j]+=mat1[i][x] * mat2[x][j];
            } 
        } 
    } 
    for (i = 0; i < m1; i++) 
    { 
        for (j = 0; j < n2; j++) 
        { 
            printf("%d ", res[i][j]); 
        } 
        printf("\n"); 
    } 

} 