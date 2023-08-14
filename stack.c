#include<stdio.h>
int stack[20],top,i,item,num,ch;
int main(){
    top=-1;
printf("Enter Array size :-");
scanf("%d",&num);
printf("****************MAIN MENU************************");
printf("Enter a Choice.....\n 1.PUSH()\n 2.  POP()\n 3. DISPLAY()");
do{
printf("Enter your Choice:- \n");
scanf("%d",&ch);
switch (ch)
{
case 1:
    push();
    break;
case 2 :
pop();
break;
case 3:
display();
break;
default:
    printf("Enter a Valid Choice..............!!!!");

}
}while(ch != 3);
}
void push(){
    if(top>= num-1){
        printf("Stack OVERFLOW");
    }
    else {
        printf("Enter a Element :-\n");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop(){
    if(top<=-1){
        printf("Stack UNDERFLOW");
    }
    else{
        printf("The poped Element is %d \n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
    printf("the element in stack\n");
 for(i=top;i>=0;i--)
 printf("\n%d ",stack[i]);
 printf("press next choice");
    }
    else
    {
        printf("\nthe stack is empty");
    } 
}    

    
