// function pointer syntax : cast-type variable name (cast-type(pointer variable)(parameter))

#include <stdio.h>

typedef unsigned int uint;

uint bitset(int n1, int pos)
{
    n1 = n1 | (1 << pos);
}

uint bitclr(int n2, int pos)
{
    n2 = n2 & (~(1 << pos));
}

uint bittgle(int n3, int pos)
{
    n3 = n3 ^ (1 << pos);
}

int state(uint (*ptr)(int, int))
{
    ptr(10, 2);
}

int main()
{
    printf("%d\n", state(bitset));
    printf("%d\n", state(bitclr));
    printf("%d", state(bittgle));
}