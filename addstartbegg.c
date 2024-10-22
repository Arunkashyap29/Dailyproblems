#include<stdio.h>
#include<conio.h>


struct Node {
    int data;
    struct Node *link;

};


struct Node* addatbeg(struct Node *start, int data )
{


    struct Node*temp=(struct Node *)malloc(sizeof(struct Node));
    
    temp->data = data;
    start = temp;
    temp->link= NULL;

    return start;
}; 




int main()
{
struct Node * start = NULL;
start = addAtBeg(start, 5);

printf("value of first node %d", start->data);

return 0;

}