// project is created for practicing Dynamic Memory Allocation
/* creator : Kv
   Date    : 20.11.2025
   Time    : 15:12 PM

    used cases : DMA
    Need to use: in structure
*/

#include <stdio.h>
#include <stdlib.h>
/*int main() {
    int *ptr; int n;
    printf("Enter the value for n : ");
    scanf("%d",&n);
    //Memory(malloc)ation have done here:
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory not allocated !!");
    }
    else
    for(int i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }
    printf("\nElements in the memories are : ");
    for(int i=0;i<n;i++){
        printf("%d",ptr[i]);
    }
    free(ptr);
    ptr=NULL;
    return 0;
}*/

// malloc using structure in C, in runtime memory allocating in HEAP
#include <string.h>
struct person
{
    char name[15];
    int age;
};

int main()
{
    struct person *personptr;                                     // for struct datatype, person variable assign *personptr pointer variable
    personptr = ((struct person *)malloc(sizeof(struct person))); // malloc:int*malloc(sizeof(btye))

    if (personptr == NULL)
    {
        printf("memory not allocated!!");
    }
    else
        strcpy(personptr->name, "kalai"); // for get() using strcpy here
    personptr->age = 25;

    printf("%s , %d", personptr->name, personptr->age);

    printf("\nGetting size of structure : %d", sizeof(struct person));

    printf("\nGetting size of structure pointer : %d", sizeof(personptr));

    free(personptr);
    personptr = NULL;
}