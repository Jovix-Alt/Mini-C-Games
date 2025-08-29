#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,n,x,y,c,z,a;
    while ( a != 2){
    printf("Enter 1 to Convert\nEnter 2 to Quit");
    scanf("%d" ,&a);
    printf("Press 1 for Binary to Decimal\nPress 2 for Decimal to Binary\n" );
    scanf("%d" ,&x);
    switch (x){
    case 1 :
        printf("Enter Number In Binary: ");
        scanf("%d" ,&z);
        int s = 0;
        i = 0;
        while(z != 0){
            y = z%10;
            c = y * (pow(2,i));
            s = s + c;
            z = z/10;
            i++;
        }
        printf("%d\n" ,s);
        break;
    case 2 :
        printf("Enter Number In Decimal: ");
        scanf("%d" ,&n);
        while( n != 0){
        x = n%2;
        n = n/2;
        printf("%d" , x);
         }
         printf("\n");
         break;
    default :
        printf("Invalid Entry\n");}
    }


    return 0;
}
