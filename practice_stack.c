#include<stdio.h>
int stack[30],top,ch,item,i,num;
int main(){
    top=-1;
    printf("Enter size of array :- \n");
    scanf("%d",&num);
    printf("*************MENU*****************\n\n");
    printf("Select Your Choice :- \n\n 1. Push() \n 2. Pop() \n Display()\n ");
    do
    {
    printf("Enter Your Choice :- \n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    
    default:
        printf("Please! Enter a Valid Choice........!!!");
        
    }
    } while (ch!=3);
}

void push(){
    if (top>=num-1)
    {
        printf("OverFlow!");
    }
    else{
        printf("Enter a Element :- \n");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    } 
}

void pop(){
    if (top<=-1)
    {
        printf("UnderFlow!");
    }
    else{
        printf("Item is removed from Stack.. That item was %d \n",stack[top]);
        top--;
    }  
}

void display(){
    if (top>=0)
    {
       printf("The Stack Elements are :- \n");
       for ( i = top; i > 0; i--)
       {
        printf("%d ",stack[i]);
       }
       printf("Choice next step....!!\n");
    }
    else{
        printf("Stack is empty!!");
    }
    

}