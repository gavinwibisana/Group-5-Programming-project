/* 
CRM fundamentals programmming Group Project
members:
Gavin Wibisana 407NKTOB
Kaiwen Xue 
Okkar Sett DEET 6879ES6V
Yuehaozhe Xie 926qraeo
GitHub Link: https://github.com/gavinwibisana/Group-5-Programming-project
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define data PATH
#define CUSTOMERDATAPATH "C:/Users/gavin/OneDrive/Documents/GitHub/CRM/Group-5-Programming-project/data/customers.txt"


// Declare Variable for storing customer data
char customer_id   [8];
char customer_name [20];
char customer_phone[10];
char customer_email[15];
int customerNumber = 0;
int customerID = 0;



int main(){
	mainMenu();
	return 0;
}


void mainMenu(){
	int inputMenu = 0;
	while (inputMenu != 3){
		printf("-------------- MAIN MENU ------------\n");
        printf("1. Contact Management \n");
        printf("2. Sales Data \n");
        printf("3. Exit \n");
        printf("Enter your Choice: ");
        scanf("%d", &inputMenu);

		if (inputMenu == 1){
			contactManagement();
		}

		else if (inputMenu == 2){
			salesData();
		}
		else if (inputMenu == 3){
			exit(0);
		}
		else{
			printf("Try Again!\n");
		}
	}
}

void contactManagement(){
	int inputMenu2 = 0 ;
	while (inputMenu2 != 2){
    printf("1. store customer \n");
    printf("2. search customer \n");
    printf("enter your choice: ");
    scanf("%d" ,&inputMenu2);

	if (inputMenu2 == 1){
		addCustomer();
	}

	else if (inputMenu2 == 2) {
		searchCustomer();
	}

	else{
		printf("Try Again! \n");
	}
	
}
}

void addCustomer(){
	FILE *fp;
    fp = fopen(CUSTOMERDATAPATH, "a");

    printf("ID: ");
    scanf("%s", customer_id);
    printf("NAME: \n");
    scanf("%s", customer_name);
    printf("PHONE: \n");
    scanf("%s" ,customer_phone);
    printf("EMAIL: \n");
    scanf("%s" , customer_email);

    fprintf(fp, "%s %s %s %s\n", customer_id, customer_name, customer_phone, customer_email);
    printf("Successfully saved! \n");
    customerNumber++;
    fclose(fp);
}

void searchCustomer(){
	printf("\n--------------customer list------------");
    printf("\nid\tname\tphone\temail");
    FILE *fp;
    fp = fopen(CUSTOMERDATAPATH, "r");
    while (!feof(fp)) {
        fscanf(fp, "%s%s%s%s", customer_id, customer_name, customer_phone, customer_email);
        printf("\n%s\t%s\t%s\t%s", customer_id, customer_name, customer_phone, customer_email);
    }
    fclose(fp);
	printf("\n");
}



void salesData() {
}