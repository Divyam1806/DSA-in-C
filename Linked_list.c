/*
//creation of node
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    printf("%d",head->data);
}
*/
/*
// creating a single linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->next = newnode;
    newnode->data = 90;
    newnode->next = newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 31;
    newnode->next=NULL;
    printf("%d\n", head->data);
    printf("%d", newnode->data);
}
*/
/*
// creating nodes using loop
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
  struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    int i,n;
    printf("Enter number of nodes :");
    scanf("%d",&n);
    head=newnode;
    i=0;
    while(i<n)
    {
        printf("Enter the value of node %d:", i+1);
        int a;
        scanf("%d",&a);
        newnode->data=a;
        i++;
    }
    printf("Total number of nodes :%d\n",i);
}
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int value;
        printf("Enter the value for node %d: ", i + 1);
        scanf("%d", &value);

        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = value;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            struct node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = new_node;
        }
    }
    printf("The values stored in each node are:\n");
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}