// project is created for using an structure and functions
/* creator : Kv
   Date    : 19.11.2025
   Time    : 13:17 PM

    used cases : functions,structure,array,typedef,pointer
    Need to use: ?
*/

// By default compiler will process the memory size of member inside the structure : structure padding
// To avoid padding ~ packing was used, it defines accurate memory size to the member : structure packing >> #pragma pack(1) used in header

#include <stdio.h>
#include <string.h>
// #pragma pack(1)

struct sensordata
{
    char sname[25];
    char stype[10];
    float sop_volt;
} s;

typedef struct unitval
{ // unitval was last used member name
    int n;
} val; // while typedef here need to declare allias name for member

struct value
{
    char name[10];
    int number;
    float value;
};

int main()
{
    // struct sensordata s;
    /* printf("\nEnter the sensor name : ");  scanf("%s", &s.sname);
     printf("\nEnter the sensor type : ");  scanf("%s", &s.stype);
     printf("\nEnter the sensor operating volatge : ");  scanf("%f", &s.sop_volt);

     printf("\n***************************************************");

     printf("\nsensor name    : %s", s.sname);
     printf("\nsensor type    : %s", s.stype);
     printf("\nsensor op volt : %.02f", s.sop_volt);

     //****************************************************************************************************************************************

     //typedef can init like this
     val q = {22}; //val = datatype, q = declared member
     printf("%d",q.n);

     //****************************************************************************************************************************************
     */
    struct value n1 = {"datalogic", 3, 3.5};          // values assigned for struct variables statically
    struct value *ptr = &n1;                          // pointer variable declared & make = to the address of struct variable
    printf("\nEnter the value name : %s", ptr->name); // asusally we can get output like pointer using -> operator with member variable
    printf("\nEnter the value number : %d", ptr->number);
    printf("\nEnter the value  : %.2f", ptr->value);
}
