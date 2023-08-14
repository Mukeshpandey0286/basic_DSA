#include<stdio.h>
int ar[50],num,search,i;
int main(){
    printf("Enter Size of Array :-");
    scanf("%d",&num);
    printf("Enter %d Integer :-", num);
    for(i=0; i<num; i++){
        scanf("%d",& ar[i]);
    }
    printf("Enter Element for Searching....");
    scanf("%d",& search);
    for ( i = 0; i < num; i++)
    {
        if (ar[i]== search)
        {
            printf("%d is Present at Index %d", search, i);
            break;
        }
        
    }
    if(i == num){
        printf("%d is not Present in this array...!!!");
    }

}