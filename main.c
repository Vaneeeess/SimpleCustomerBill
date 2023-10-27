#include <stdio.h>
#include <stdlib.h>
#include "Cust.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	st customers[100];
	int count = 0;
	
	int choice;
	
	do {
		
		printf("1 - to add account on list\n");
		printf("2 - to search customer account\n");
		printf("3 - print the details\n");
		printf("4 - exit\n");
		printf("Select what do you want to do?: ");
		scanf("%d", &choice);
		
		switch(choice) 
		{
			case 1: {
				addperson(customers, count);
				break;
			}
			case 2: {
				char name[50];
				printf("Enter the name you want to search: ");
				scanf("%s", name);
				search(customers, count, name);
				break;
			}
			case 3: {
				output(customers, count);
				break;
			}
			case 4: {
				printf("Exit the Program...");
				break;
			}
			default:
				printf("Invalid Input!");
		}
	}while(choice != 4);
	return 0;
}
