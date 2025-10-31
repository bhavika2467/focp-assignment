#include<stdio.h>
int main () {
    int max , min ;
    int score[10]={90,99,56,78,98,34,62,78,92,39};
    max = score[0];
    min = score[0];
    for (int i = 1; i < 10; i++) {
        if (score[i] > max) {
            max = score[i];
        }
        if (score[i] < min) {
            min = score[i];
        }
    }
    printf("\nHighest score (Maximum): %d\n", max);
    printf("Lowest score (Minimum): %d\n", min);

    return 0;
}
    
