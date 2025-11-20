// project is created for practicing bitwise opeartor
/* creator : Kv
   Date    : 20.11.2025
   Time    : 11:44 PM

    used cases : bit ~set,clear,toggle,left&rght shift
    Need to use: in all data types
*/

#include <stdio.h>

//(value<<position)  |  (value>>position)

int main()
{
    int a = 10, q = 15, c, d;
    // c=a&(1<<0);
    a = a | (1 << 5);
    printf("\nwhile bit set : %d", a); // 42
    a = a & (~(1 << 5));
    printf("\nwhile bit clear : %d", a); // 10
    a = a ^ (1 << 5);
    printf("\nToggle the same bit : %d", a); // 42
    return 0;
}