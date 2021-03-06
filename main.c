#include <stdio.h>
#include <stdlib.h>
/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  A small little calculator Program I made
 *
 *        Version:  1.4
 *        Created:  10/23/2014 9:24:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Sapein (CC),
 *   Organization:
 *
 * =====================================================================================
 */

int main(){
	int choice; //This is simply for the user's choice
	int firstNumber; //This is for the First inputted Number to operate with
	int secondNumber; //This is the second number for the program that the user defines

	printf("Hello and welcome to Sapein's Simple Calculator Program!\n");
	while(choice != 5){
		//This is the First section of the program, this is also where users enter the values that they need to
		printf("Please enter one of the below options to get started!\n");
		printf("1.Multiplication\n");
		printf("2.Division\n");
		printf("3.Addition\n");
		printf("4.Subtraction\n");
		printf("5.Exit\n");
		scanf(" %d", &choice);
		printf("\nFirst Number: ");
        if(choice == 5){
            break;
        }
        scanf(" %d", &firstNumber);
		printf("\nSecond Number:");
		scanf(" %d", &secondNumber);
        if(choice == 1){
			printf("%d * %d = %d", firstNumber, secondNumber, firstNumber*secondNumber);
			char wait = getchar();
		}
		else if(choice == 2){
			printf("%d / %d = %d", firstNumber, secondNumber, firstNumber/secondNumber);
			char wait = getchar();
		}
		else if(choice == 3){
			printf("%d + %d = %d", firstNumber, secondNumber, firstNumber+secondNumber);
			char wait = getchar();
		}
		else if(choice == 4){
			printf("%d - %d = %d", firstNumber, secondNumber, firstNumber-secondNumber);
			char wait = getchar();
		}
		else{
			printf("Wrong Input");
		}
		char wait = getchar();
	}
	return 0;
}
