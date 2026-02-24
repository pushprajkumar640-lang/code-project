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
int main()
{
    int arr[] = {3, 5, 17, 9, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    return 0;
}