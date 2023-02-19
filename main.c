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
	While (inputMenu2 != 2){
    printf("1. store customer \n");
    printf("2. search customer \n");
    printf("enter your choice: ");
    scanf("%d" ,&inputMenu2);

	if (inputMenu2 == 1){

	}

	if (inputMenu2 == 2) {

	}	
	
}
}

void salesData() {
}