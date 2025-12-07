#include<stdio.h>
#include<stdlib.h>

int main(){
//name a file as pointer variable 
FILE *ptr; unsigned int n=0;
//ptr variable= func(open)
ptr=fopen("file.txt","w"); //file name in .txt and  r/w/a
if(ptr==NULL){
 printf("data not entered");
}

printf("enter any string : ");
scanf("%d",&n);
//for write(w) need to use fprintf(file name,normal printf)
fprintf(ptr,"%d",n);
//close pointer variable 
fclose(ptr);