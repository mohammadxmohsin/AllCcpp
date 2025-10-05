//How to use malloc.realloc in Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n,r,f;
    printf("\nEnter the Number of Elements to allocate: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
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
    printf("\nEnter The New Allocation Size: ");
    scanf("%d",&r);
    ptr=(int*)realloc(ptr,r*sizeof(int));
    printf("\nEnter New Data at the Allocated Space: ");
    for(i=n;i<r;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nAfter Reallocation Data is: ");
    for(i=0;i<r;i++)
    {
        printf("\n%d",*(ptr+i));
    }
    printf("\nEnter The Space to reallocat(reduce): ");
    scanf("%d",&f);
    ptr=(int*)realloc(ptr,f*sizeof(int));
    printf("\nAfter Reallocation Data is: ");
    for(i=0;i<f;i++)
    {
        printf("\n%d",*(ptr+i));
    }
    return 0;
}