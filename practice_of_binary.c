#include<stdio.h>
int ar[40],i,num,search,f,l,mid;
int main(){
    printf("Enter array size :-");
    scanf("%d",&num);
     printf("Enter array Elements :-");
    for ( i = 0; i < num; i++)
    {
       scanf("%d",&ar[i]);
    }
    f=0;
    l=num-1;
    mid = (f+l)/2;
    printf("Enter number for search :-");
    scanf("%d",&search);
    while(f<=l)
    {
        if (ar[mid]<search)
        {
           f=mid+1;

        }
        else if(ar[mid]==search){
            printf("%d is found at %d Index ....!!!",search,mid);
            break;
        }
        else{
            l = mid-1;
            mid = (f+l)/2;
        }
    }
    if(f>l){
        printf("Element is not present in this array...!!");
    }

}