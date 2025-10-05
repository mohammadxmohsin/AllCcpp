#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("\nEnter The Number of Elements to allocate: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    printf("\nMemory is Allocated at:%u",ptr);

    for(i=0;i<n;i++)
    {
        *(ptr+i)=i*100;
    }
    printf("\nSecond Location is:%u",*(ptr+0));
    printf("\nFifth Location is:%u",*(ptr+1));
    free(ptr);
    printf("\nAfter Allocation");
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(ptr+i));
    }

    return 0;
}