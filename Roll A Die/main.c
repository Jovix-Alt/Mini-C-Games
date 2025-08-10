#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand (time(0));
    int r = rand();
    int p,a;
    int q = rand();
    int s = rand();
    int t = rand();

    while( p!=2 ){
            int r = (rand() %6) + 1;
            int q = (rand() %6) + 1;
            int s = (rand() %6) + 1;
            int t = (rand() %6) + 1;

            printf("Roll a Die!!\n");
            printf("Choose:\n 1. Roll One Die\n 2. Roll Two Dice\n 3. Roll Three Dice\n 4. Roll Four Dice\n Enter Number - ");
            scanf("%d" ,&a);

            switch(a) {
        case 1 :
            printf("%d\n" ,r);
            break;
        case 2 :
            printf("%d , %d\n" ,r,q);
            break;
        case 3 :
            printf("%d , %d , %d\n" ,r,q,s);
            break;
        case 4 :
            printf("%d , %d , %d , %d\n" ,r,q,s,t);
            break;
        default :
            printf("Invalid Number\n");
            }

        printf("Press 1 to Roll Again and 2 to Exit - ");
    scanf("%d" ,&p);
    }

    return 0;
}
