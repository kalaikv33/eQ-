// project is created for using an structure and functions
/* creator : Kv
   Date    : 19.11.2025
   Time    : 13:17 PM

    used cases : functions,structure,array,typedef,#define
    Need to use: pointer,
*/

#include <stdio.h>
#include <string.h>

struct sensordata
{
    char sname[25];
    char stype[10];
    float sop_volt;
} s;

int main()
{
    // struct sensordata s;
    printf("Enter the sensor name : ");
    scanf("%s", &s.sname);
    printf("\nEnter the sensor type : ");
    scanf("%s", &s.stype);
    printf("\nEnter the sensor operating volatge : ");
    scanf("%f", &s.sop_volt);

    printf("\n***************************************************");

    printf("\nsensor name    : %s", s.sname);
    printf("\nsensor type    : %s", s.stype);
    printf("\nsensor op volt : %.02f", s.sop_volt);
}
