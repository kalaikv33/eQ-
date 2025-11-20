// project is created for practicing Dynamic Memory Allocation--calloc
/* creator : Kv
   Date    : 20.11.2025
   Time    : 15:12 PM

    used cases : DMA in calloc >> malloc
    Need to use: in structure
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter the value n : ");
    scanf("%d", &n);
    ptr = ((int *)calloc(n, sizeof(int))); // init calloc to pointer variable

    if (ptr == NULL)
    {
        printf("\nmemory not allocated!!");
    }
    else
        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
    printf("\nAllocated memories in calloc : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("\nSize of the calloc : %d", sizeof(ptr));
    free(ptr);
    ptr = NULL;

    printf("\n------------------------------------------------------");

    int *mptr, mnum;
    printf("\nEnter the malloc num : ");
    scanf("%d", &mnum);
    mptr = ((int *)malloc(mnum * (sizeof(int))));
    if (mptr == NULL)
    {
        printf("memory not allocated!!");
    }
    else
        for (int p = 0; p < mnum; p++)
        {
            mptr[p] = p + 1;
        }
    printf("\nAllocated memories in malloc : ");
    for (int p = 0; p < mnum; p++)
    {
        printf("%d, ", mptr[p]);
    }
    printf("\nSize of the malloc : %d", sizeof(mptr));
    free(mptr);
    mptr = NULL;
}