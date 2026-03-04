#include <stdio.h>
int linearsearch(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5,8,3,2,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", linearsearch(arr,n,3));
    return 0;
}