#include <stdio.h>
#include <string.h>
#include "Cust.h"

void input(st *person) {
	
		printf("Enter the name: ");
		scanf(" %[^\n]", person->name);
		printf("Enter your address: ");
		scanf(" %[^\n]", person->address);
		printf("Enter your Phone Number: ");
		scanf("%lf", &person->phonenum);
		printf("Enter amount paid: ");
		scanf("%lf", &person->amountpaid);
		printf("Enter your balance: ");
		scanf("%lf", &person->balance);
		printf("Enter account number: ");
		scanf("%d", &person->accnum);
}

void addperson(st list[], int *count) 
{
	st newperson;
	
	input(&newperson);
	for(int i = 0; i < *count; i++)
	{
		if(strcmp(list[i].name, newperson.name) == 0) 
		{
			printf("This %s is not existing in the system!\n", newperson.name);
			return;
		}
	}
	
	list[*count] = newperson;
	(*count)++;
}


void search(st list[], int *count, char name) 
{
	
	for(int i = 0; i < *count; i++) 
	{
		if(strcmp(list[i].name, name) == 0)
		{
			printf("This %d is not existing in the system!\n", name);
			return;
		} 
		else 
		{
			printf("This %d is existing in the system!\n", name);
			printf("What do you want to do this person? print his/her balance? (y/n): ");
			char choice;
			scanf("%c", &choice); fflush(stdin);
			if(choice == 'y' || choice == 'Y')
			{
				printf("Remaning Balance: %lf\n", list[i].balance);
			}
			else 
			{
				printf("Goodbyee.\n");
				return;
			}
		}
	}
}


void output(st list[], int count) 
{
	for(int i = 0; i < count; i++) 
	{
		printf("Your name is: %s\n\t", list[i].name);
		printf("Balance: %lf\n\t", list[i].balance);
		printf("Address: %s\n\t", list[i].address);
		printf("Phone Number: %lf\n\t", list[i].phonenum);
		printf("Amount paid: %lf\n\t", list[i].amountpaid);
		printf("Account Number: %d\n\t", list[i].accnum);
	}
}
