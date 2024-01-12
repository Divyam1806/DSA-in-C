#include <stdio.h>
#include <stdlib.h>
void printArray(int *arr,int n)
{
    printf("Elements in the array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void insertionSort(int *arr, int n)
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
void selectionSort(int *arr, int n)
{
    int m,temp;
    for (int i=0;i<n-1;i++)
    {
        m = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[m])
            {
                m = j;
            }
        temp=arr[i];
        arr[i]=arr[m];
        arr[m]=temp;
        }
    }
    printf("Selection sort done....\n");
}
void bubbleSort(int *arr, int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Completed bubble sort :\n");
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
    //insertionSort(arr,n);
    //selectionSort(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);

}