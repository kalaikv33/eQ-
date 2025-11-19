// project is created for using an structure and functions
/* creator : Kv
   Date    : 19.11.2025
   Time    : 19:50 PM

    used cases : array
    Need to use: ?
*/

#include <stdio.h>
#include <string.h>

unsigned int unitsensor()
{
    int data, data1;
    printf("\n2Entre the value for data : ");
    scanf("%d", &data);
    printf("\nEntre the value for data1 : ");
    scanf("%d", &data1);

    printf("\nvalue of unit sensor = %d", data + data1);
}

struct sensordata
{
    char sname[25];
    char stype[10];
    float sop_volt;
};

int main()
{
    struct sensordata s[2];

    // printf("sizeof s : %d",sizeof(s));

    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter the sensor name : ");
        scanf("%s", s[i].sname);
        printf("\nEnter the sensor type : ");
        scanf("%s", s[i].stype);
        printf("\nEnter the sensor operating volatge : ");
        scanf("%f", &s[i].sop_volt);
        printf("\n-----------------------------------------------------");
    }

    printf("\n***************************************************");

    for (int i = 0; i < 2; i++)
    {
        printf("\nsensor name    : %s", s[i].sname);
        printf("\nsensor type    : %s", s[i].stype);
        printf("\nsensor op volt : %.2f", s[i].sop_volt);
        printf("\n-----------------------------------------------------");
    }
}
