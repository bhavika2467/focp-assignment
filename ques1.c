// amstrong num 
#include<stdio.h>
#include<math.h>
int main() {
    int n , sum =0 , rem ;
    printf("enter the value of number :");
    scanf("%d",&n);
    int c = printf("%d",n),copy = n ; 
    while(n>0) {
        rem = n%10;
        sum+=ceil(pow(rem,c));
        n/=10;}
        printf("\nsum=%d copy = %d",sum,copy);
        if(sum==copy)
        printf("\nits an amstrong num");
        else 
            printf("\n its not an amstrong");
        return 0 ;
}