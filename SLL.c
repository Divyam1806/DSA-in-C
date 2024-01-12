//SLL
# include <stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void createNode()
{
        int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);


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
            struct node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
}
void printList(struct node *head)
{
    if (head==NULL)
    {
        printf("Linked List is empty...\n");
        return ;
    }
    printf("The values stored in each node are:\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void insertEnd()
{
    struct node *ptr,*newnode;
    ptr=head;
     if (head==NULL)
    {
        printf("Linked List is empty...\n");
        return ;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    int data;
    printf("\n Enter the element to be inserted at end: ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=newnode;
    printList(head);
}
void insertBegin()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
     if (head==NULL)
    {
        printf("Linked List is empty...\n");
        return ;
    }
    int data;
    printf("\nEnter the element to be inserted at beginning: ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    printList(head);
}
void insertPos()
{
     if (head==NULL)
    {
        printf("Linked List is empty...\n");
        return ;
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=head;
    int n,data,i=1;
    printf("\nEnter position at which node is to be inserted :");
    scanf("%d",&n);
    printf("Enter value in the node :");
    scanf("%d",&data);
    newnode->data=data;
    while(i<n-1)
    {
        ptr=ptr->next;
        i++;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    printList(head);
}
void delBegin()
{
    if (head==NULL)
    {
        printf("Linked list is empty...\n");
        return;
    }
    struct node *ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    printf("\nValues after deletion from beginning :\n");
    printList(head);
}
void delEnd()
{
    if (head==NULL)
    {
        printf("Linked list is empty...\n");
        return;
    }
    struct node *temp;
    for(temp=head;temp->next->next!=NULL;temp=temp->next);
    free(temp->next);
    temp->next=NULL;
    printf("\nValues after deletion from end :\n");
    printList(head);
}
int main()
{
    createNode();
    printList(head);
    insertEnd();
    insertBegin();
    insertPos();
    delBegin();
    delEnd();

}