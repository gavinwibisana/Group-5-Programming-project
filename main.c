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
		printf("-------------- MAIN MENU ------------\n");
        printf("1. Contact Management \n");
        printf("2. Sales Data \n");
        printf("3. Exit \n");
        printf("Enter your Choice: \n");
        scanf("%d", &inputMenu);
}