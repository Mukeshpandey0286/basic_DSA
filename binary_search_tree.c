#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};


struct Node* create()
{
    int item ;
    struct Node *newNode;
    newNode = (struct Node*) malloc (sizeof (struct Node));
    printf("Enter  Node :-");
    scanf("%d",&item);
    newNode -> data = item;
    newNode -> left = NULL;
    newNode -> right = NULL;
    
    return newNode;


};

int main()
{
    struct Node *head;
    head = NULL;
    head = create();
}