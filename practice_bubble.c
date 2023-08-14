#include<stdio.h>
void bubble();
int ar[30],i,j;
int temp;
 int j;
  int num;

int main(){
    printf("Enter Array size:- ");
    scanf("%d",&num);
    printf("Enter Array elments:-");
    for ( i = 0; i < num; i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("The sorted Array is :-");
    bubble();
}
void bubble(){
    for ( i = 0; i < num; i++)
    {
        for ( j = 0; j < num-i-1; j++)
        {
            if(ar[j]>ar[j+1]){
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