#ifndef Cust_H
#define Cust_H


struct Customer {
	
	char name[50];
	char address[50];
	double phonenum;
	double amountpaid;
	double balance;
	int accnum;
};

typedef struct Customer st;

void input(st *person);
void addperson(st list[], int *count);
void search(st list[], int *count, char name);
void output(st list[], int count);



#endif
