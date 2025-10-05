#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("\nEnter the Number of Elements to Allocate: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("\nEnter Data to Store: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nThe Data at Allocated Memory: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(ptr+i));
    }

    return 0;
}