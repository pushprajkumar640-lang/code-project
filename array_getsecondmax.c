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
int getsmax(int arr[], int n)
{
    int max=arr[0];
    int smax=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        if(arr[i]<max && arr[i]>smax)
        {
            smax=arr[i];
        }
    }
    return smax;

}
int main()
{
    int arr[10] = {4,9,6,2,5};
    int n=5;
    display(arr,n);
    printf("second max element=%d ", getsmax(arr,n));
    return 0;
}