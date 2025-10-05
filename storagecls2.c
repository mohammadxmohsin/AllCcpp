/*Storage Classes(functions)
1.Register:
  It stores Data in CPU
  It Stores Small values ,if value is Larger then the value is auto manipulate to the (RAM)
  */
#include<stdio.h>
void display()
{
    register int a=25;
    printf("\nDisplay:%d",a);
}
int main()
{
    int a=21,b;
    display();
    printf("\nMain:%d",a);
    printf("\nGarbage:%d",b);
    return 0;
}