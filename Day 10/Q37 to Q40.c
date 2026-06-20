/*QUESTION 33
Q33 Write a program to Print reverse star pattern. 
***** 
**** 
*** 
** 
*


*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*QUESTION 34
Q34 Write a program to Print reverse number 
triangle. 
 
12345 
1234 
123 
12 
1 

*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*QUESTION 35
Q35 Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE

*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}

/*QUESTION 36
Q36 Write a program to Print hollow square 
pattern. 
***** 
*      * 
*      * 
*      * 
***** 

*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}