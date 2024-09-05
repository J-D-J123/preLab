/**
 * Author:  J-D-J123
 * Date:    9/5/2024
 * PLA:     Ethan J
 * Desc:    Prints only if the number is a Fizz or a Buzz and if not then it does not print that number 
 *             and then tells you how many times it has ran and printed through the for loop.
 *            
 */

#include <stdio.h> 

int main(void) {

    int printCounter = 0; 
    int loopCounter  = 0; 

    for(int i = 1; i <= 50; i++) {

        // count how many times the loop runs 
        loopCounter++; 

        // if it is divisible by 3 print "Fizz"
        if(i % 3 == 0 && i % 5 == 0) {
            printf("i = %d: Fizz Buzz\n", i); 
            printCounter++; 
        } else {
            if(i % 3== 0) {
                printf("i = %d: Fizz\n", i); 
                printCounter++;
            } else {
                if(i % 5 == 0) {
                    printf("i = %d: Buzz\n", i); 
                    printCounter++;
                }
            }

        }
    }

    printf("Printed %d Times.\n", printCounter);
    printf("Loop went %d Times.\n", loopCounter);
} // end of PreLab3.c
