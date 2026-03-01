#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n) 
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
int main()
{
    int arr[10] = {4,8,6,5,2};
    int n=5;
    printf("Array elements--->\n");
    display(arr,n);
    reverse(arr, n);
    printf("Array reverse elements--->\n");
    display(arr, n);
    return 0;
}