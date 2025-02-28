#include<stdio.h>
int main()
{
    int n=1;
    while(n>0)
    {
        printf("Enter no of questions :\n");
        int a;
        scanf("%d",&a);
        printf("input the key:\n");
        char arr[a];
        scanf("%s",arr);
        printf("You entered: %s\n",arr);
        printf("\n");
        printf("Input the name of student :  ");
        char name[50];
        scanf("%s",name);
        printf("ENter the reponse of %s :  ",name);
        char ans[a];
        scanf("%s",ans);
        int marks=0;
        for(int i=0;i<a;i++)
        {
            printf("%d == %d\n",arr[i],ans[i]);
           if(arr[i]==ans[i])
           {
            marks++;
           }
           printf("%d ... ",i);
        }
        printf("Marks scored by %s is %d/%d \n",name,marks,a);
        printf("Do you want to evaluate another student is (Y/N)\n");
        char c='1';
        scanf(" %c",&c);
        if(c=='N')
        {
           printf("Good bye !!\n");
           --n;
           return 0;
        }
    }
    return 0;
}
