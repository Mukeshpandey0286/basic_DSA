#include<stdio.h>
int ar1[10][10],ar2[10][10],i,j,k,row,col,mul[10][10];
int main(){
    printf("Enter Row Size for matrix1:- :-\n");
    scanf("%d",&row);
    printf("Enter Column Size for matrix1:- \n");
    scanf("%d",&col);
    printf("First Matrix is:- \n");
    for ( i = 0; i < row; i++)
    {
       for ( j = 0; j < col; j++)
       {
        scanf("%d",&ar1[i][j]);
       }
       
    }

    // printf("Enter Row Size for matrix2:- :-\n");
    // scanf("%d",&row);
    // printf("Enter Column Size for matrix2:- \n");
    // scanf("%d",&col);

    printf("Second Matrix is:- \n");

    for ( i = 0; i < row; i++)
    {
       for ( j = 0; j < col; j++)
       {
        scanf("%d",&ar2[i][j]);
       }
       
    }
    
    printf("Multilipication of Matrices is :- \n");
    for ( i = 0; i < row; i++)
    {
        for(j=0;j<col;j++)
        {
            mul[i][j]=0;

            for (k=0; k<col;k++)
            {

                mul[i][j] += ar1[i][k]*ar2[k][j];

            }

        }
    }
    for ( i = 0; i < row; i++)
    {
       for(j=0;j<col;j++)
       {
        printf("%d \t",mul[i][j]);
       }
       printf("\n");
    }
    


}