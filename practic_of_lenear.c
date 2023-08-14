#include<stdio.h>
int ar[30],i,num,search;
int main(){
    printf("Enter Array size:- ");
    scanf("%d",&num);
    printf(" Enter %d integer :-\n",num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter element for seach :- ");
    scanf("%d",&search);
    for ( i = 0; i < num; i++)
    {
       if(ar[i]== search){
        printf("%d is found at %d Index",search,i);
       }
    }
     if(i==search){
        printf("%d is not present in this Array....!!",search);
       }
}