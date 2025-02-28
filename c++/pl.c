
#include <stdio.h>
int main()
{
    float arr[10];float sum=0;
    printf("Enter elements in the array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
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
    for(int i=0;i<10;i++)
    {
        printf("%f ",arr[i]);
    }
    printf("\n");
    printf("Largest element is : %f\n",arr[9]);
    if (arr[9]!=arr[8])
    {
    printf("Second largest element is : %f\n",arr[8]);
    }
    else{
          for(int i=8;i>=1;i--)
    {
        if(arr[i]!=arr[i-1])
        {
        printf("Second largest element is : %f\n",arr[i-1]);
        break;
        }
    }
    }
    printf("Smallest elemnt is :%f\n",arr[0]);
    if(arr[0]!=arr[1])
    {
    printf("Second smallest element is : %f\n",arr[1]);
    }
    else
    {
         for(int i=1;i<=8;i++)
    {
        if(arr[i]!=arr[i+1])
        {
        printf("Second largest element is : %f\n",arr[i+1]);
        break;
        }
    }
    }
    printf("Average is : %f",(sum/10));
}