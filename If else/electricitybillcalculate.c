/*   Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.


Required knowled*/

#include<stdio.h>
int main (){
 float unit,amt,totalamount;
printf("Enter the Units consumed ");
scanf("%f",&unit);
if(unit<=50){
    amt= unit*0.50;

}
else if (unit<=150)
{
    amt=25+((unit -50 )*0.75);
}


else if( unit<=250){
    amt= 100+((unit-150)*1.20);
}
else if (unit>250){
    amt= 220+(( unit -250 )*1.50); 
}
   totalamount =amt + amt*0.20;

   printf("Amount to pay %f",totalamount);

    
    return 0;
}