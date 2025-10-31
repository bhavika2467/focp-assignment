#include<stdio.h>
int main () {
    int count =0 ;
    int marks[20] = {98,70,97,70,93,91,95,70,98,89,78,70,68,86,43,72,85,80,90,70};
    for(int i=0;i<20;i++) {
if(marks[i]==70) {
    printf("\nstudent %d\n index %d",i+1,i);
    count ++;
}
    }
 if (count == 0) {
        printf("No student scored 70.\n");
    } else {
        printf("\nTotal number of students who scored 70 = %d\n", count);
    }
}