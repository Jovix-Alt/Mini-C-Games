#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand (time(0));
    int r = rand();
    int a,me,you,s,p,sc;

    while( p!=2 ){
            int r = (rand() %3) + 1;

            printf("Get Ready To Play Stone, Paper, Scissors\n");
            printf("Choose:\n 1. Stone\n 2. Paper\n 3. Scissors\n");
            scanf("%d" ,&a);

            printf("You chose %d\n" , a);
            printf("Computer chose %d\n" , r);

            if ( a==r ){
                printf("Draw\n");
            }else if (a == 1 && r == 2){
            printf("Computer Wins\n ");
            }else if (a == 1 && r == 3){
            printf("Player Wins\n ");
            }else if (a == 2 && r == 1){
            printf("Player Wins\n ");
            }else if (a == 2 && r == 3){
            printf("Computer Wins\n ");
            }else if (a == 3 && r == 1){
            printf("Computer Wins\n ");
            }else if (a == 3 && r == 2){
            printf("Player Wins\n ");
            }

        printf("Press 1 to Play Again and 2 to Exit - ");
    scanf("%d" ,&p);
    }

    return 0;
}
