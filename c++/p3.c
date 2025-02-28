#include <stdio.h>
int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("ENter the elements in the array :\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    { int c=0;
        for(int j=0;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            c++;
          }
        }
        if((arr[i]!=-10000))
        {
        printf(" %d occured %d times \n",arr[i],c);
        arr[i]=-10000;
        }
    }
    return 0;
}
