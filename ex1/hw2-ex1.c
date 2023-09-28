/*
Alexander Rogers
9/18/23
hw2-ex1: Perfect Numbers with different loops
*/

#include <stdio.h>

void PrintFunc(long long int numf, long long int sumf);

int main() {
    // Used long long for very big values
    long long int i, num = 0, sum = 0;

    // Make sure that user inputs a postive number thats why values had to be signed
    while (num <= 0) {
        printf("Please enter a postive integer value: ");
        scanf("%lli", &num);
    }

    /* For Loop iterates through all divisable numbers before num.
       if number is divisable adds value to sum */
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    
    /* Didnt want to repeat code so added a Print Function that tells the user if the number is perfect or not
       Does a pass by value to PrintFunc for comparison. */
    printf("For Loop: ");
    PrintFunc(num, sum);

    // Resets values for next loop
    i = 1;
    sum = 0;

    // Does same iterations as For Loop but in While Loop
    while(i < num) {
        if(num % i == 0) {
            sum += i;
        }
        i++;
    }

    // Prints While Loop Results
    printf("While Loop: ");
    PrintFunc(num, sum);

    // Resets values for next loop
    i = 1;
    sum = 0;

    // Do While Loop iterations
    do {
        if(num % i == 0) {
            sum += i;
        }
        i++;
    } while (i < num);

    // Prints Do While Loop Results
    printf("Do While Loop: ");
    PrintFunc(num, sum);
    
}

// Takes in num and sum as num and sum function
void PrintFunc(long long int numf, long long int sumf) {
    // Compares num and sum to see if value is a perfect numbers
    if(sumf == numf) {
        printf("value is a Perfect Number!\n");
    }
    else {
        printf("Value is NOT a Perfect Number.\n");
    }
}