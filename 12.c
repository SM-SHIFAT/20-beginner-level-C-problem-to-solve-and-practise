#include<stdio.h>
int main(){

    int row,col;

    printf("Enter number of Rows: ");
    scanf("%d",&row);

    printf("Enter number of Column: ");
    scanf("%d",&col);

   int disp[row][col];

   int i, j;
   for(i=0; i<row; i++) {
      for(j=0;j<col;j++) {
         printf("Enter value for index[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<row; i++) {
      for(j=0;j<col;j++) {
         printf("%d ", disp[i][j]);
         if(j==row-1){
            printf("\n");
         }
      }
   }
   return 0;
}
