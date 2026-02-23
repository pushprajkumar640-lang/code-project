#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void selection_sort_rec(int arr[],int n,int i)
{
    if(i==n)
    {
        return;
    }
    int min=i;
    for(int j=i+1;j<n;j++)
    {
        if (arr[j]<arr[min])
        {
            min=j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    selection_sort_rec(arr,n,i+1);
}
int main()
{
    int arr[]={6,9,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    selection_sort_rec(arr,n,0);
    display(arr,n);
    return 0;
}
