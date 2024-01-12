# include <stdio.h>
/*
//merging 2 arrays in a 3rd array
int main()
{
    int x,y,k=0;
    printf("Enter size of 1st array : ");
    scanf("%d",&x);
    int a[x];
    printf("\nEnter elements in the first array\n");
    for (int i=0;i<x;i++)
    scanf("%d",a + i );
    printf("\nEnter size of 2nd Array: ");
    scanf ("%d",&y);
    int b[y];
    printf("\nEnter Elements in second array \n" ) ;
    for(int j=0;j<y;j++)
    scanf("%d", b + j);
    int c[x+y];
    for(int i=0;i<x;i++)
    {
        c[i]=a[i];
        k++;
    }
    for(int i=0;i<y;i++)
    {
        c[k]=b[i];
        k++;
    }
    for(int i=0;i<k;i++)
    printf("%d ",c[i]);
}
*/
/*
//reversing the array
int main()
{
    int a;
    printf("Enter size of array :");
    scanf("%d",&a);
    int arr[a],rev[a];
    printf("Enter array elements :");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=a-1;i>=0;i--)
    {
        rev[j]=arr[i];
        j++;
    }
    printf("Reversed array : ");
    for(int i=0;i<j;i++)
    printf("%d ",rev[i]);
}
*/

//Create a linked list which accepts value till u enter y and display index values
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

  return 0;
}