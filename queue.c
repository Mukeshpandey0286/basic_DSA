#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *head;
    struct node *front;
struct node *rear;
};



struct node *create()
{
    int item;
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Ndoe:- \n");
    scanf("%d",&item);
    newNode->data = item;
    newNode->front = NULL;
    newNode->rear = NULL;

};
