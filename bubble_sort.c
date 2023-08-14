#include<stdio.h>
void bubble_sort();
int ar[50],num,i,j,temp=0;
int main(){
    printf("Enter size of Array:- ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("The sorted Array is:- ");
    bubble_sort();
}
void bubble_sort(){
    for(i=0; i<num; i++){
        for ( j = 0; j < num-i-1; j++)
        {
          if(ar[j]> ar[j+1]){
            temp = ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = temp;
          }  
        }
    }
    for ( i = 0; i < num; i++)
    {
       printf("%d ",ar[i]);
    }
    
}