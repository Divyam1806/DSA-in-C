/*# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
int c=0;
void createNode()
{
        int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    c=n;

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
    c++;
    while(i<n-1)
    {
        ptr=ptr->next;
        i++;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    printList(head);
    printf("\nNo. of nodes : %d",c);
}

int main()
{
    createNode();
    printList(head);
    insertPos();
}*/

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int n)
{
    int key,j;
    for (int i=0;i<=n-1;i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]<key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    printf("Insertion sort done....\n");
}
void insertionSorta(int *arr, int n)
{
    int key,j;
    for (int i=0;i<=n-1;i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    printf("Insertion sort done....\n");
}
void printArray(int *arr,int n)
{
    printf("Elements in the array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


int main()
{
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionSorta(arr,n);
    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
    
}    