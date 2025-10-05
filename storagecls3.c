/*Storage Classes(functions)
  1.Static:
  It stores Data in main Memory(RAM)
  it keeps the value that define inside the function without change.
*/
#include<stdio.h>
void count()
{
    static int c;
    c++;
    printf("\nStatic:%d",c);
}
int main()
{
    count();
    count();
    count();
    count();
    count();
    return 0;
}