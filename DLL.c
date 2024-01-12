//Double Linked list
#include<stdlib.h>
#include<stdio.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* head;
void addToEmpty(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;
    head=newnode;
}
void traverse()
{
    struct node *temp;
    temp=head;
    printf("Data in the doubly linked list :\n");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void insertBegin()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->next=NULL;
    int data;
    printf("Enter value of node to be inserted at beginning :");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertEnd()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->next=NULL;
    struct node* temp=head;
    int data;
    printf("Enter value of node to be inserted at end :");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void insertAtPos()
{
    struct node *newnode,*temp;
    int pos,data;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->next=NULL;
    printf("Enter position at which u want to insert the node :");
    scanf("%d",&pos);
    printf("Enter value of node to be inserted :");
    scanf("%d",&data);
    newnode->data=data;
    temp=head;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
}
void delBegin()
{
    head=head->next;
    free(head->prev);
    head->prev=NULL;
}
void delEnd()
{
    struct node* ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
    printf("\nAfter deletion from end :\n");
    traverse();
}
void delAtPos()
{
    struct node* ptr=head;
    int pos,i=1;
    printf("\nEnter position at which u want to delete a node :");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        ptr=ptr->next;
    }
    ptr->next->prev=ptr->prev;
    ptr->prev->next=ptr->next;
    free(ptr);
    printf("After deletion from given position :\n");
    traverse();
}
void reverse()
{
    struct node* ptr1=head;
    struct node* ptr2=ptr1->next;
    ptr1->next=NULL;
    ptr1->prev=ptr2;
    while(ptr2!=NULL)
    {
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->next;
    }
    head=ptr1;
    printf("\nDouble linked list after reversing :\n");
    while(ptr1->next!=NULL)
    {
        printf("%d ",ptr1->data);
        ptr1=ptr1->next;
    }
}
int main()
{
    int data;
    printf("Enter value of 1st node :");
    scanf("%d",&data);
    addToEmpty(data);
    insertBegin();
    insertEnd();
    insertEnd();
    insertEnd();
    insertAtPos();
    traverse();
    //delBegin();
    //delEnd();
    //delAtPos();
    reverse();
}