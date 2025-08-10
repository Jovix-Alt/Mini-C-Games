#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand (time(0));

    int r = rand();
   int x,n,attempts,a;

   while ( a == 1){
        int r = (rand() %100) + 1;
        attempts = 0;

        do {
            printf("Enter a random number btw 1 to 100 - ");
            scanf("%d" , &x);

            if( x > r){
                printf("Too Big\n");
            }else if ( x == r) {
            printf("You are Correct\n");
            }else {
            printf("Too Small\n");
            }
            attempts = attempts + 1;

        } while ( x != r);
        printf("You guessed it in %d attempts\n" , attempts);

    printf("Press 1 to Continue and 2 to Exit- \n");
    scanf("%d" ,&a);
   }


    return 0;
}
