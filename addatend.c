#include<stdio.h>
#include<stdlib.h>
  struct Node {
	 int data;
	 struct Node *link;
};
struct Node* addAtBeg(struct Node *start,int data) {
struct Node*temp=(struct Node *)malloc(sizeof(struct Node));
temp->data=data;
start=temp;
temp->link=NULL;
return start;
}
struct Node* addAtend(struct Node *start,int data) { 
	struct Node *tmp,*p;
   p=start;
   tmp = (struct Node *) malloc(sizeof(struct Node));
   tmp->data = data;
   
   while(p->link != NULL) {
	   p = p->link;
   }
   
   p->link = tmp;
   tmp->link = NULL;
   
   return start;
}
   
        int main () {
		int n;
		struct Node * start,*tempPtr = NULL;
		printf("enter the number of nodes\n");
		scanf("%d",&n);
		
		// Value insertion logic
			start = addAtBeg(start,5);
		for(int i=2; i<=n; i++) {
			start = addAtend(start,5*i);
		}
		
		// Value to be printed;
		tempPtr = start;
		while(tempPtr != NULL) {
			printf("%d\t",tempPtr->data);
			tempPtr = tempPtr->link;
		}
		return 0;
			}