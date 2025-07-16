// project is created for use all datatypes and functions
/* creator : Kv
   Date    : 16.07.2025
   Time    : 4:29 PM
    
*/

#include<stdio.h>
#include"string.h"

int credit();
int debit();

static int avail_bal;

int main()
{
	unsigned const int acc_num=220044,i,menu;
	
	printf("                              *** WELCOME ***                  ");
	printf("\n                              TO ATM MACHINE                   ");
	printf("\n                             IDFC Bank DELHI                           ");
	
	
	do{
	   printf("\n\n\nEnter your Account number : ");
	   scanf("%d",&acc_num);
      }

    while(i>=2);
    {
	if(acc_num == 220044)
	{
		printf("\n                        Welcome to the ATM                  ");
		printf("\n\nAccount Holder's name   : kabir");
		printf("\nMobile Number           : 1234567891");
		printf("\nAvailable Balance       : %d", avail_bal);
		printf("\nBranch Name             : IDFC Bank rajouri garden ");
		
		printf("\n\n\n                      SELECT                            ");
		printf("\n                   1. Credit                                ");
				printf("\n                   2. Debit                                ");
						printf("\n                   3. Available Balance                                ");
								printf("\n                   4. Mini Balance                                ");
								
		printf("\n*********************************************************\n");
		scanf("%s",&menu);
								
		switch (menu)
		{
		  case '1':
		  printf("\ncurrent page : credit ");
		  credit();	
		  break;
		  
		  case '2':
		  printf("\ncurrent page : Debit ");
		  //credit();	
		  break;
		  
		  case '3':
		  printf("\ncurrent page : Available Balance ");
		  //credit();	
		  break;
		  
		  case '4':
		  printf("\ncurrent page : Mini Balance ");
		  //credit();	
		  break;
		  
		  default:
		  	printf("\n\n\n       Thanks for choosing us !!!                                   ");
		}
	}
	
	else
		printf("\n\nEnter Account number is invalid !!!");
    }
	
}
int credit()
{
	unsigned int credit_amt;
	printf("\n\n\nEnter the amount to credit on account :  ");
	scanf("%d",&credit_amt);
	credit_amt+=avail_bal;
	printf("\nCredited amount in account : %d", credit_amt);
}