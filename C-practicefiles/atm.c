// project is created for use all datatypes and functions
/* creator : Kv
   Date    : 16.07.2025
   Time    : 4:29 PM
    
*/

#include<stdio.h>
#include"string.h"

int init_bank();
unsigned int credit();
int debit();

static int avail_bal=200;
unsigned int i=1;

int main()
{
	unsigned const int acc_num=220044;
	
	printf("                              *** WELCOME ***                  ");
	printf("\n                              TO ATM MACHINE                   ");
	printf("\n                             IDFC Bank DELHI                           ");
	
	
	do{
	   printf("\n\n\nEnter your Account number : ");
	   scanf("%d",&acc_num);
	   i++;
      }
      
    while(i<2);
    {
	  if(acc_num == 220044)
    	{
		  printf("\n                        Welcome to the ATM                  ");
		  printf("\n\nAccount Holder's name   : kabir");
	      printf("\nMobile Number           : 1234567891");
		  printf("\nAvailable Balance       : %d", avail_bal);
		  printf("\nBranch Name             : IDFC Bank rajouri garden ");
		
		
		     init_bank();
	    }
	
	else
		printf("\n\nEnter Account number is invalid !!!");
    }
	
}

int init_bank()
{
	unsigned int j;
	char menu;
	
	printf("\n\n\n                      SELECT                            ");
		printf("\n                   1. Credit                                ");
				printf("\n                   2. Debit                                ");
						printf("\n                   3. Available Balance                                ");
								printf("\n                   4. Mini Balance                                ");
							        	printf("\n                   5. EXIT                                ");
								
		printf("\n*********************************************************\n");
		scanf("%c",&menu);
		
	  for(j=1;j<10;j++)
	  {	
		switch(menu)
		{
		  case '1':
		  printf("\ncurrent page : credit ");
		  credit();	
		  break;
		  
		  case '2':
		  printf("\ncurrent page : Debit ");
		  debit();	
		  break;
		  
		  case '3':
		  printf("\ncurrent page : Available Balance ");
		  printf("\n\nAvailable Balance : %d", avail_bal);	
		  break;
		  
		  case '4':
		  printf("\ncurrent page : Mini Balance ");
		  //credit();	
		  break;
		  
		  case '5':
		  printf("\ncurrent page : EXIT ");
		   j=11;
		  printf("\n\n\n       Thanks for choosing us !!!                                   ");
		  break;
		  
		  default:
		  printf("\n\n\n       Thanks for choosing us !!!                                   ");
		}
	  }
}
unsigned int credit()
{
	unsigned int credit_amt;
	printf("\n\n\nEnter the amount to credit on account :  ");
	scanf("%d",&credit_amt);
	avail_bal+=credit_amt;
	printf("\nCredited amount in account : %d", credit_amt);
	printf("\nCurrent Balance in account : %d", avail_bal);
}
int debit()
{
	int debit_amt;
	printf("\n\n\nEnter the amount to debit on account :  ");
	scanf("%d",&debit_amt);
	avail_bal-=debit_amt;
	printf("\nDebited amount in account : %d", debit_amt);
	printf("\nCurrent Balance in account : %d", avail_bal);
}




















