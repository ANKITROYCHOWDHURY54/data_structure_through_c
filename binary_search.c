#include<stdio.h>
int binary_search(int *arr,int se,int l,int h)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==se)
        {
            return mid;
        }
        if(arr[mid]<se)
        {
            l = mid + 1;
        }
        if(arr[mid]>se)
        {
            h = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n,i;
    printf("Enter the size of the elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int se;
    scanf("%d",&se);
    int res=binary_search(arr,se,0,n-1);
    if(res==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at %d index",res);
    }
}