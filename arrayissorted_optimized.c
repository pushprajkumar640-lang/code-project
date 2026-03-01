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
int isSorted_optimized(int arr[], int n) // O(n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[10] = {7,4,9,2,3};
    int n = 5;
    display(arr, n);
    printf("%d", isSorted_optimized(arr, n));
    return 0;
}