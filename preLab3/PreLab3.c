/**
 * Author:  J-D-J123
 * Date:    9/5/2024
 * PLA:     Ethan J
 * Desc:    For the prelab assignment, you are 
 *              to write a program that goes through all integers from 1 through 50
 *              in order from the least value (1) through the greatest value (50). As you move through these integers, if
 *              the current integer is divisible by 3, print “Fizz”. If the current integer is divisible by 5, print “Buzz”. If
 *              the current integer is divisible by both 3 and 5, print “Fizz Buzz”. If the current integer is divisible by
 *              neither 3 nor 5, print the integer. You should print a comma after each thing you print (whether “Fizz”,
 *              “Buzz”, “Fizz Buzz”, or a number), except for the last one. If you have trouble doing all but the last one,
 *              it is OK to print a comma after the last one too, but….cooler if you don’t
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
            printf("Fizz Buzz, "); 
            printCounter++; 
        } else {
            if(i % 3== 0) {
                printf("Fizz, "); 
                printCounter++;
            } else {
                if(i % 5 == 0) {
                    printf("Buzz, "); 
                    printCounter++;
                } else {
                    printf("%d, ", i); 
                    printCounter++;
                } if (i == 50) {
                    printf("\u1F60E. \n");

                }
            }

        }
    }

    printf("Printed %d Times.\n", printCounter);
    printf("Loop went %d Times.\n", loopCounter);
} // end of PreLab3.c
