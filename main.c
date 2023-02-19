/* 
CRM fundamentals programmming Group Project
members:
Gavin Wibisana 407NKTOB
Kaiwen Xue 
Okkar Sett DEET 6879ES6V
Yuehaozhe Xie 926qraeo
GitHub Link: https://github.com/gavinwibisana/Group-5-Programming-project
*/

// import library to use
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define data PATH
#define CUSTOMERDATAPATH "C:/Users/gavin/OneDrive/Documents/GitHub/CRM/Group-5-Programming-project/data/customers.txt"
#define SALESDATAPATH "C:/Users/gavin/OneDrive/Documents/GitHub/CRM/Group-5-Programming-project/data/sales.txt"

// Declare Variable for storing customer data
char customer_id   [8];
char customer_name [20];
char customer_phone[10];
char customer_email[15];
int customerNumber = 0;
int customerID = 0;

// Declare variable for storing sales data
char sales_customer_id[8];
char salesperson_name[20];
char item[20];
char year[5];
char month[3];
float quantity;
float price;
float total_sales;
char print_quantity[20];
char print_price[20];
char print_total_sales[20];



// program starts here
int main(){
	mainMenu();
	return 0;
}

// display main menu
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
			contactManagementMenu(); // go to contact management menu
		}

		else if (inputMenu == 2){
			salesMenu(); // go to sales menu
		}
		else if (inputMenu == 3){
			exit(0); // exit the program
		}
		else{
			printf("Try Again!\n"); // handle execption when user put wrong menus
		}
	}
}

// customer data management function menu start here
void contactManagementMenu(){
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

// add customer data and save it as txt file
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

// list all customer data inside the txt file
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
// customer data management function end here

// sales data function start from here
void salesMenu() {
	int inputMenu3 = 0;
	while(inputMenu3 != 2){
        printf("1. store sales data \n");
        printf("2. search sales data \n");
        printf("enter your choice: \n");
        scanf("%d", &inputMenu3);
        if (inputMenu3 == 1){
            salesStoreData();
        }
        else if(inputMenu3 == 2){
            searchSales();
        }
        else{
            printf("Try Again! \n");
        }
	}
}

// add and store sales data as txt file
void salesStoreData(){
    FILE *fp;
    fp = fopen(SALESDATAPATH, "a");
    printf("customer ID: \n");
    scanf("%s", sales_customer_id);
    printf("person in charge: \n");
    scanf("%s", salesperson_name);
    printf("Item Name: \n");
    scanf("%s", item);
    printf("year: \n");
    scanf("%s", year);
    printf("month: \n");
    scanf("%s" , month);
    printf("quantity: \n");
    scanf("%f" , &quantity);
    printf("price: \n");
    scanf("%f" , &price);

    total_sales = quantity * price; // total price is calculated by quantity times price per pcs

    fprintf(fp, "%s %s %s %s %s %.2f %.2f %.2f\n", sales_customer_id, salesperson_name, item, year, month, quantity, price, total_sales);
    printf("Successfully saved! \n");
    customerID++;
    fclose(fp);
}

// list all sales data from txt file
void searchSales(){
        printf("\n--------Sales Data----------");
    printf("\nID \tsales person\titem name\tyear\tmonth\tquantity\tprice\ttotal sales");
    FILE *fp;
    fp = fopen(SALESDATAPATH, "r");
    while (!feof(fp)) {
        fscanf(fp, "%s %s %s %s %s %s %s %s\n", sales_customer_id, salesperson_name, item, year, month, print_quantity, print_price, print_total_sales);
        printf("\n%s \t%s \t\t%s\t\t%s \t%s \t%s \t\t%s \t%s", sales_customer_id, salesperson_name, item, year, month, print_quantity, print_price, print_total_sales);
    }
    fclose(fp);
    printf("\n");
}