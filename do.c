//author;abdijabarahmed

#include <stdio.h>
  int main (){
   int i,start,stop;
   printf("Enter the Start: ");
   scanf("%d",&start);
   printf("Enter the stop: ");
   scanf("%d",&stop);
   i=start;
   do{
   printf("%d\n",i);
   i++;
   }
   while(i<=stop);
   
  return 0;
  }