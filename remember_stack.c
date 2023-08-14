#include<stdio.h>
int stack[12],i,val,ch,top;
int main(){
    top = -1;
    printf("Enter your array size:-\n");
    scanf("%d",&val);
    printf("************MAIN MENU**************\n");
    while(ch!=3){
    printf("Enter your choice:-\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:push();
        break;
    case 2:pop();
    break;
    case 3: display();
    break;
    default: printf("Enter Valid Choice!!!");
        break;
    }
}
}
void push(){
    int item;
    if ( top >= val-1 )
    {
        printf("OVERFLOW..!!");
    }
    else{
        printf("Enter Element :- \n");
        scanf("%d",&item);
        top++;
        stack[top] = item;

    }
    
}
void pop(){
    if(top <= -1){
printf("UNDERFLOW!!\n");
    }
    else{
printf("Item removed from %d",stack[top]);
top--;
    }
}
void display(){
    if(top>=0){
        printf("Stack elments are:- \n");
        for ( i = top; i > 0; i--)
        {
            printf("%d ",stack[i]);
        }
        
    }
    else{
        printf("Stack is empty...!!\n");
    }
}