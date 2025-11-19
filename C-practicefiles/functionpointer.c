// project is created for using an function pointer
/* creator : Kv
   Date    : 19.11.2025
   Time    : 17:39 PM

    used cases : functions,structure,array,typedef,#define
    Need to use: pointer,
*/

// call back function using function pointer

#include <stdio.h>

    int oddoreven(int, int);
int addbit(int, int);
int display(int (*ptr)(int, int)); // assigning function pointer on declaration

int main()
{
    // printf("Try programiz.pro");
    display(oddoreven);
    display(addbit);
    return 0;
}

int oddoreven(int s, int d)
{
    if ((s % 2) || (d % 2) == 0)
    {
        printf("Even");
    }
    else
        printf("Odd");
}

int addbit(int k, int l)
{
    int add = 0;
    add = k + l;
    printf("\naddbit value = %d", add);
}

int display(int (*ptr)(int, int))
{
    ptr(1, 2); // function call
}