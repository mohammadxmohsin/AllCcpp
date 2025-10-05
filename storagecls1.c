/*Storage Classes(functions)
1.Automatic:
  It stores Data in main Memory(RAM)
  Useable in only its own Funtion
*/

#include<stdio.h>
void display()
{
    int a=25;
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