#include <stdio.h>
int main()
{
    float arr[10];
    printf("Enter elements in the array");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("What i got is : \n");
     for(int i=0;i<10;i++)
    {
        printf("%f",arr[i]);
    }
}