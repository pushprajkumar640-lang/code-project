#include<stdio.h>
void display(int arr[], int n)
{
    printf("Array elements--->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int insert_beg(int arr[], int n, int x)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = x;
    return n + 1;
}
int main()
{
    int arr[10] = {5,7,3,9,2};
    int n=5;
    int x=4;
    n=insert_beg(arr,n,x);
    display(arr,n);
    return 0;
}