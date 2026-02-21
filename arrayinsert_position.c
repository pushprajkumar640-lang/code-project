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
int insert_pos(int arr[], int n, int pos, int x)
{
    if (pos >= n)
        return n;
    if (pos < 0)
        return n;
    for (int j = n - 1; j >= pos; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[pos] = x;
    return n + 1;
}
int main()
{
    int arr[10] = {4,8,2,9,6};
    int n=5;
    int x=3;
    int pos=5;
    n=insert_pos(arr,n,x,pos);
    display(arr,n);
    return 0;
}
