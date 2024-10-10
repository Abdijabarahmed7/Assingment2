//
//author:Abdijabar Ahmed
#include <stdio.h>
int main(){
int customerID;
char customerNAME[50];
int unitsCONSUMED;
float totalamounttopay;
float chargesperunit;
// input customer details 
printf("enter customer id;" );
scanf("%d",&customerID);
printf("enter customer name;" );
scanf("%s",&customerNAME);
printf("enter units consumed;" );
scanf("%d",&unitsCONSUMED);
 //determine charges per unit based on units consumed 
 if(unitsCONSUMED <200){
 chargesperunit =1.00;
 } 
 else if (unitsCONSUMED <600)
  {chargesperunit =1.50;
  } 
  else if(unitsCONSUMED <800)
 {chargesperunit =2.00;
 } 
 else{ chargesperunit=2.00;}
 //calculate total amount before discount 
 totalamounttopay=unitsCONSUMED*chargesperunit;
 //apply discount if applicable 
 if(totalamounttopay>400) {
 totalamounttopay*=0.85; //the discount of 15%
 }
 
 printf("customerBILL");
 printf("customer ID:%d\n" ,customerID);
 printf("customer NAME:%s\n" ,customerNAME);
 printf("units CONSUMED:%d\n" ,unitsCONSUMED);
 printf("totalamounttopay:%.2f" ,totalamounttopay);
 return 0;
 }