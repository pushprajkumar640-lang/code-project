#include <stdio.h>
void display(int arr[], int n)
{
    printf("Array elements--->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int getmaxx(int arr[], int n)
{
    int maxx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }
    return maxx;
}
int main()
{
    int arr[10] = {4,8,3,2,6};
    int n=5;
    display(arr,n);
    printf("Max elemnt is-->%d", getmaxx(arr, n));
    return 0;
}
