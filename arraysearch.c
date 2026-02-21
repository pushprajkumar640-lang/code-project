#include <stdio.h>

void display(int arr[], int n)
{
    printf("Array elements ---> ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int search(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int arr[]={7,4,9,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    printf("%d\n",search(arr,n,9));
    return 0;
}