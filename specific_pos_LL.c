#include <stdio.h>
#include<stdlib.h>

int main() {
    typedef struct node{
        int data;
        struct node *link;
    }Node;
    
    Node *head=NULL,*temp,*nw;
    int no;
    printf("How many numbers you mean ? ");
    scanf("%d",&no);
    while(no--)
    {
        nw=malloc(sizeof(Node));
        printf("Enter the data ");
        scanf("%d",&nw->data);
        nw->link=NULL;
        
        if(head==NULL)
        {
            head=temp=nw;
        }
        else
        {
            temp->link=nw;
            temp=nw;
        }
    }
    // inserting a data at a specific position
    temp=head;
    int count=0,pos;
    printf("Enter the pos ");
    scanf("%d",&pos);
    Node *ptr,*z;
    ptr=malloc(sizeof(Node));
    printf("Insert the data");
    scanf("%d",&ptr->data);
    z=temp->link;
    while(temp!=NULL)
    {
        count++;
        if(count==pos)
        {
            temp->link=ptr;
            ptr->link=z;
            break;
        }
        z=z->link;
        temp=temp->link;
    }
    //printing elements
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    
    return 0;
}
