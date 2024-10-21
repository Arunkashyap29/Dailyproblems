#include<stdio.h>
#include<stdlib.h>



struct node{

    int data;
    struct node *link;
};

int main()
{
    struct node *head = (node*) malloc(sizeof(struct node));
if(head==NULL)
{
    printf("memory not allocated ");


}

head -> data=5;
head -> link=NULL;

printf("%d\n",head->data);
printf("%p",head-> link);


}