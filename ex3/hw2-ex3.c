/*
Alexander Rogers
9/18/23
hw2-ex3: Natural Numbers
*/

#include <stdio.h>

int main() {
    int a = 0, b = 0;

    // Check to see if a or b is above 0 or under 1 million
    while((a <= 0) || (a >= 1000000) || (b <= 0) || (b >= 1000000)) {
        printf("Please give postive values for A and B: ");
        scanf("%d %d", &a, &b);
    }

    // Checks to see if a or b is divisable by 17 or 42 and vice versa
    if(a % 17 == 0 && b % 42 == 0) {
        printf("yes\n");
    }
    else if(a % 42 == 0 && b % 17 == 0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

}