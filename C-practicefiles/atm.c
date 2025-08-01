// project is created for use all datatypes and functions
/* creator : Kv
   Date    : 16.07.2025
   Time    : 4:29 PM
<<<<<<< HEAD
   last updated :01.08.25 / 01:42 PM
    used cases : functions,switch-case,do-while,time.h,if-else,basic(struct&array)
    Need to use: pointer,for loop,bit manipulation,bit filed,
*/

#include<stdio.h>
#include<string.h>
#include<time.h>

//func-declaration
=======
    
    used cases : functions,switch-case,do-while,time.h,if-else,
*/

#include<stdio.h>
#include"string.h"
#include<time.h>

>>>>>>> 80e75e11f95394676487cab3ebe1369d05266bd1
int init_bank();
unsigned int credit();
int debit();
int mini_bal();

//variable-declaration
//static int avail_bal;

struct reg{
	unsigned int accnt_num;
	char acc_hol_name[25];
	unsigned int acc_hol_mob;
	char acc_type[25];
};

int main()
{
<<<<<<< HEAD
	unsigned const int acc_num=220044,menu;

	int i;
	printf("\t\t                              *** WELCOME ***                  ");
	printf("\n\t\t                              TO ATM MACHINE                   ");
	printf("\n\t\t                             IDFC Bank DELHI                           ");
	
       printf("\nSELECT");
       printf("\n\n1.New Register"); 	
       printf("\n\n2.Existing User");
       printf("\n\n3.Exit\n");
      
	  
	  do{
	   scanf("%d",&menu);
        switch(menu){
       	case 1:
       	  printf("\n\t\t\tNew Register");	
       	  struct reg n1;
       	  printf("\nEnter your 6 digit account number : ");   scanf("%u",&n1.accnt_num); //strlen need to use
       	  printf("\nEnter your registered name : ");          scanf("%s",n1.acc_hol_name); //need to check, array to rea
       	  printf("\nEnter your registered mobile number : "); scanf("%u",&n1.acc_hol_mob);      	  
       	  printf("\nEnter your account type : ");             scanf(" %s",n1.acc_type);
       	   
       	   printf("\n\t\t *** New registration details ***\n");
       	   printf("\nacc num : %u",n1.accnt_num);
       	    printf("\nacc name : %s",n1.acc_hol_name);
       	      printf("\nmob num : %u",n1.acc_hol_mob);
       	    	printf("\nacc type : %s",n1.acc_type);
        break;
       	  
	    case 2:
	      printf("\n\t\t\tExisting User");
	      printf("\n\n\nEnter your Account number : ");
	      scanf("%d",&acc_num);
      
	       if(acc_num == 220044)
    	    {
		      printf("\n                        Welcome to the ATM                  ");
		      printf("\n\nAccount Holder's name   : kabir");
	          printf("\nMobile Number           : 1234567891");
		      printf("\nBranch Name             : IDFC Bank rajouri garden ");
		
		        init_bank();
	        }
	        else if(acc_num == n1.accnt_num)
	        {
	          printf("\n                        Welcome to the ATM                  ");
		      printf("\n\nAccount Holder's name   : %s",n1.acc_hol_name);
	          printf("\nMobile Number           : %d",n1.acc_hol_mob);
	          printf("\nAccount Type            : %s",n1.acc_type);	
		      printf("\nBranch Name             : IDFC Bank rajouri garden ");
		
		        init_bank();
			}
           else
		      printf("\n\nEnter Account number is invalid !!!\n");
		 break;   
		  
		 case 3:
		 	printf("\n\t\t\t\t\t\t ----- EXIT ------");
		 default:
		   printf("\n\t\t\t\tThanks for using our service!!!");     
	    }}while(menu != 3);
	    return 0;
=======
	unsigned const int acc_num=220044;
	
	printf("                              *** WELCOME ***                  ");
	printf("\n                              TO ATM MACHINE                   ");
	printf("\n                             IDFC Bank DELHI                           ");
	
	
	   printf("\n\n\nEnter your Account number : ");
	   scanf("%d",&acc_num);
      
	  if(acc_num == 220044)
    	{
		  printf("\n                        Welcome to the ATM                  ");
		  printf("\n\nAccount Holder's name   : kabir");
	      printf("\nMobile Number           : 1234567891");
		  printf("\nBranch Name             : IDFC Bank rajouri garden ");
		
		  init_bank();
	    }
	else
		printf("\n\nEnter Account number is invalid !!!");
>>>>>>> 80e75e11f95394676487cab3ebe1369d05266bd1
}

int init_bank()
{
	unsigned int j,menu; //char loop;
<<<<<<< HEAD
=======
	
>>>>>>> 80e75e11f95394676487cab3ebe1369d05266bd1
	printf("\n\n\n                      SELECT                            ");
		printf("\n                   1. Credit                                ");
				printf("\n                   2. Debit                                ");
						printf("\n                   3. Available Balance                                ");
								printf("\n                   4. Mini Balance                                ");
							        	printf("\n                   5. EXIT                                ");
<<<<<<< HEAD
=======
								

>>>>>>> 80e75e11f95394676487cab3ebe1369d05266bd1
      do
      {
      	printf("\n*********************************************************\n");
		scanf("%d",&menu);
		
		switch(menu)
		{
		  case 1:
		  printf("\ncurrent page : credit ");
		  credit();	
		  break;
		  
		  case 2:
		  printf("\ncurrent page : Debit ");
		  debit();	
		  break;
		  
		  case 3:
		  printf("\ncurrent page : Available Balance ");
		  printf("\n\nAvailable Balance : %d", avail_bal);	
		  break;
		  
		  case 4:
		  printf("\ncurrent page : Mini Balance ");
		  mini_bal();	
		  break;
		  
		  case 5:
		  printf("\ncurrent page : EXIT ");
		  break;
		  
		  default:
		  printf("\n\n\n       Thanks for choosing us !!!                                   ");
		}
		//printf("\n");
        //printf("\nDo you want to continue : y/n\t");
        //scanf("%s",&loop);
	  }
	  //while(loop == 'y' | loop == 'Y');
	  while(menu !=5);
	  return 0;
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
int mini_bal()
{
	time_t now;
    struct tm *current_time;
	printf("\n\n\t\t**************** IDFC BANK *****************");
	printf("\n\t\t\t IDFC BANK rajouri garden \t\t\t");
	printf("\n\nAcc holder name : Kabir\t\tAccount Number : ****44");
	printf("\nAvailable Balance : %d",avail_bal);
    //getting time in console page, predefined syntax is here in C-code.
    time(&now);
    current_time = localtime(&now);

    printf("\nDate and Time : %s", asctime(current_time));	
}




















<<<<<<< HEAD
=======

















>>>>>>> 80e75e11f95394676487cab3ebe1369d05266bd1
