/* //temp variable 
#include<stdio.h>
int main() {
    int a , b , temp ;
    printf("a is ");
    scanf("%d",&a);
    printf("b is ");
    scanf("%d",&b);
temp = a; 
a = b;    
b = temp;  
 printf("\nnew a is %d",a);
 printf("\nnew b is %d",b);
}
 // arithmetic
#include<stdio.h>
int main () {
     int a , b  ;
    printf("a is ");
    scanf("%d",&a);
    printf("b is ");
    scanf("%d",&b);
     a = a + b;  
    b = a - b;  
    a = a - b;
    printf("\nnew a is %d",a);
 printf("\nnew b is %d",b);
} 
// pointer manipulation 
#include<stdio.h>
void swap (int *x , int *y){
    int temp ;
    temp = *x ;
    *x = *y ;
    *y = temp ;
    return ; 
}
int main () {
    int a = 7 ;
    int b = 8 ;
    swap(&a,&b) ;
    printf("\n%d",a) ;
    printf("\n%d",b) ;
} */


