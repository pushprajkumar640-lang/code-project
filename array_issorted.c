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
int isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[10] = {5,3,7,4,9};
    int n=5;
    display(arr,n);
    printf("%d  ", isSorted(arr, n));
    return 0;
}