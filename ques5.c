#include<stdio.h>
int main() {
    int x , y ;
    printf("enter x \n enter y \n");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0){
        printf("x and y are in 1 quadrant ");
    }
    else if (x>0 && y<0) {
        printf("x and y is in 4 quadrant");
    }
    else if (x<0 && y>0) {
        printf("x and y is in 2 quadrant ");
    }
    else if (x<0 && y<0) {
        printf("x and y is in 3 quadrant ");
    }
    else {
        printf("x and y is at origin");
    }
}