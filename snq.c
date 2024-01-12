
/*//Array Implementation of stacks
#include <stdio.h>
#include <stdlib.h>
#define size 10
int arr[size],top=-1;
void push()
{
    int data;
    printf("Enter the element to be pushed: ");
    scanf("%d",&data);
    if(top==size-1)
    {
        printf("Stack overflow....");
        return;
    }
    top++;
    arr[top]=data;
    printf("Element pushed successfully....");
}
void pop()
{
    if(top==-1)
            {
                printf("Stack underflow....");
                exit(1);
            }
    printf("Poped out element :%d",arr[top]);
    top--;
}
void traverse()
{
    printf("Elements in the stack :\n");
    for (int i=top;i>=0;i--)
    {
        printf("%d  ",arr[i]);
    }
}
int main()
{
    int ch;
    printf("1. Push\n2. Pop\n3. Traverse\n4. Exit\n");
    printf("Enter choice :");
    scanf("%d",&ch);
    while(ch!=4)
    {
        if(ch==1)
        {
            push();
        }
        else if (ch==2)
        {
            pop();
        }
        else if(ch==3)
        {
            traverse();
        }
        else if(ch!=1||ch!=2||ch!=3||ch!=4)
        {
            printf("Invalid choice...choose again");
        }
        printf("\nEnter choice :");
        scanf("%d",&ch);
    }
    
}
*/

//Linked list representation of stacks
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *top=NULL;
void push(int data)
{
    struct node* newnode = malloc(sizeof(newnode));
    if(newnode==NULL)
    {
        printf("Stack overflow...");
        exit(1);
    }
    newnode->data = data;
    newnode->next=top;
    top=newnode;
}
void traverse(struct node *head)
{
    if (head==NULL)
    {
        printf("Linked List is empty...\n");
        return ;
    }
    printf("The values stored in stack are:\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
