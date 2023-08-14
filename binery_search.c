#include<stdio.h>
int ar[50],first,last,mid,i,num,search;
int main(){
    printf("Enter size of Array:-");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter element for search :-");
    scanf("%d",&search);
    first = 0;
    last = num-1;
    mid = (first + last)/2;
    while(first<= last){
        if(ar[mid]<search){
           first = mid + 1;
        }
        else if (ar[mid]==search){
            printf("%d is present at Index %d",search,mid);
            break;
        }
    
    else{
        last = mid - 1;
        mid = (first + last)/2;
    }
    }
    if (first> last)
    {
       printf("%d is not present in this Array......!!!", search);
    }
    
}