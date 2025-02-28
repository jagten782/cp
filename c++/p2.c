#include <stdio.h>
void sort(int arr[])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[j]>arr[i])
            {
              int t=arr[i];
              arr[i]=arr[j];
              arr[j]=t;
            }
        }
    }
}
int linear(int arr[],int x)
{
    for(int i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int binary(int arr[],int x)
{
    int high=9,low=0,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return x;
        }
        else if (arr[mid]>x)
        {
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n=10;
    while(n)
    {
    printf("Enter 1 for linear search\n Enter 2 for binary search \n Enter 3 for selection sort \n Enter 4 to exit\n");
    scanf("%d",&n);
    if(n==1 || n==2 || n==3)
    {
        int arr[10];
        printf("enter elements in the array\n");
        for(int i=0;i<10;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(n==1)
        {
            printf("Enter key ");
            int key;
            scanf("%d",&key);
            int a=linear(arr,key);
            if(a==-1)
            printf("Not found");
            else
            printf("Found at %d position",a+1);
        }
        else if (n==2)
        {
           printf("Enter key ");
            int key;
            scanf("%d",&key);
            int a=binary(arr,key);
            if(a==-1)
            printf("Not found");
            else
            printf("Found at %d position",a+1);
        }
        else if (n==3)
        {
            sort(arr);
            printf("Ascending order :\n");
            for(int i=0;i<10;i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            printf("Descending order :\n");
            for(int i=9;i>=0;i--)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
    }
    else if(n==4)
    {
        printf("Bye Bye terminating .....\n");
        return 0;
    }
    else{
        printf("Invalid input\n");
    }
    }
    return 0;
}
