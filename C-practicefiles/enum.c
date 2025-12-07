
// used cases func pointer
#include <stdio.h>

enum data
{
    On,
    Off
};

void toggle(int data1)
{
    if (data1 == 1)
    {
        printf("pin is high\n");
    }
    else
        printf("pin is low\n");
}

// void val(*ptr)(int );

int main()
{
    //	int val;
    //	printf("Enter value : ");
    //    scanf("%d",&val);
    enum data data1;
    data1 = On;
    toggle(data1);
}