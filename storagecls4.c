/*Storage Classes(functions)
1.External/Global:
  It stores Data in main Memory(RAM)
  useable in anywhere in the program.
*/
#include<stdio.h>
extern int c;
void count()
{
    c++;
    printf("\nextern:%d",c);
}
int main()
{
    count();
    printf("\nextern:%d",c);
    
    return 0;
}