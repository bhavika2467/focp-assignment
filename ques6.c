// Binary and Decimal systems 
#include<stdio.h> 
int main (){
int binary , decimal ;
printf("enter binary number ");
scanf("%d",&binary);
decimal = 0 ;
int a=1, rem  ;
while(binary !=0) {
   rem = binary %10;
    decimal = decimal + rem * a;
    binary = binary / 10 ;
    a = a*2 ;
}
printf("the decimal number is %d",decimal);
}