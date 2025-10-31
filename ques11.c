#include<stdio.h>
int main () {
    int m[10]={13,65,87,44,22,64,78,49,72,80};
    int k =0 , j=0 , even[10],odd[10],i;
    for(i=0;i<10;i++) {
        if(m[i]%2==0) {
            even[k]=m[i];
            k++;
        }
        else {
            odd[j]=m[i];
            j++;
        }
    }
    printf("\n even array values :\n");
    for(i=0;i<k;i++) {
        printf("\n even array = %d", even[i]) ;
    }
printf("\n odd array values :\n") ;
for (i=0;i<j;i++){
    printf("\n odd arrays = %d", odd[i]);
}
    }
