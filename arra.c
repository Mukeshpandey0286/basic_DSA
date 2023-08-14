#include<stdio.h>
int ar[10],i,num,search,found;
int main(){
    printf("Enter Array size :-");
    scanf("%d",&num);
    printf("Get Array Elements :-");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter Elements for Search :-");
    scanf("%d",&search);
    found = 0;
    for ( i = 0; i < num; i++)
    {
      if (ar[i]==search)
      {
        found = 1;
        break;
      }
    }
      if (found == 1)
      {
        printf("%d is found at %d Index ..",search,i);
      }
      else{
        printf("Elemet is not present in this array....!!!!");
      }
        
    
    return 0;
}