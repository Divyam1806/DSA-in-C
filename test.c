/*
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

Node *head = NULL;

void insertAtEnd(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
  } else {
    Node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void displayOddIndexValues() {
  Node *temp = head;
  int index = 1;
  while (temp != NULL) {
    if (index % 2 != 0) {
      printf("%d ", temp->data);
    }
    temp = temp->next;
    index++;
  }
}

void displayMiddleElement() {
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  printf("Middle element: %d\n", slow->data);
}

int main() {
  int data;
  char choice = 'Y';

  while (choice == 'Y') {
    printf("Enter a number: ");
    scanf("%d", &data);
    insertAtEnd(data);

    printf("Do you want to continue (Y/N)? ");
    scanf(" %c", &choice);
  }

  displayOddIndexValues();
  displayMiddleElement();

  return 0;
}

#include<stdlib.h>
#include<stdio.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* addtoempty(struct node *head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node* addtobeg(struct node *head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
struct node* addtoend(struct node*head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    struct node* ptr;
    ptr=head;
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    temp->prev=ptr;
    temp->data=data;
    temp->next=NULL;
    ptr->next=temp;
    return head;
}
struct node* addtopos(struct node* head,int pos,int data)
{
    struct node* ptr =head;
    struct node* ptr2 =NULL;
    struct node *temp=malloc(sizeof(struct node));
    while(pos !=1)
    {
        ptr=ptr->next;
        pos--;
    }
    ptr2=ptr->next;
    ptr->next=temp;
    ptr2->prev=temp;
    temp->data=data;
    temp->prev=ptr;
    temp->next=ptr2;
    return head;
}
struct node* createlist(struct node* head)
{
    int n,i,data;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    printf("\nEnter the element for 1st node :");
    scanf("%d",&data);
    head=addtoempty(head,data);
    for(i=2;i<=n;i++)
    {
        printf("Enter the element for %dth node: ",i);
        scanf("%d",&data);
        head = addtoend(head,data);
    }
    return head;
}
struct node* deltobeg(struct node* head)
{
    head=head->next;
    free(head->prev);
    head->prev=NULL;
    return head;
}
struct node* deltoend(struct node* head)
{
    struct node* ptr=head;
    while(ptr->next !=NULL)
    {
        ptr=ptr->next;
    }
    struct node* temp;
    temp=ptr->prev;
    temp->next=NULL;
    free(ptr);
    return head;
}
struct node* deltopos(struct node* head,int pos)
{
    struct node* ptr=head;
    struct node* temp;
    while(pos!=1)
    {
        ptr=ptr->next;
        pos--;
    }
    temp=ptr;
    ptr->next->prev=ptr->prev;
    ptr->prev->next=ptr->next;
    free(temp);
    return head;

}
struct node*  reverse(struct node* head)
{
    struct node* ptr1;
    struct node* ptr2;
    ptr1=head;
    ptr2=ptr1->next;
    ptr1->next=NULL;
    ptr1->prev=ptr2;
    while (ptr2 !=NULL)
    {
        ptr2->prev =ptr2->next;
        ptr2->next =ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    head =ptr1;
    return head;
}
int main()
{
    struct node* head =NULL;
    struct node* ptr;
    head =createlist(head);
    //head =addtoempty(head,45);
    head =addtobeg(head,50);
    head =addtoend(head,30);
    head =addtopos(head,2,10);
    head =deltobeg(head);
    head =deltoend(head);
    head =deltopos(head,2);
    head =reverse(head);
    ptr=head;
    while(ptr != NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}*/

