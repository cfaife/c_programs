#include "menu.h"
#include "fibonacci.h"


void show_menu(){

	printf("************************************************\n");
	printf("***********BEM vindo ao progrma*****************\n");
	printf("************************************************\n");
	printf("|----------------------------------------------|\n");
	printf("|   1 - Serie de Fibonaccy                     |\n");
	printf("|   2 - Conversao   em Binario                 |\n");
	printf("|   3 - Numeros  Romanos                       |\n");		
	printf("|                                              |\n");
	printf("|   *selecione uma das opcooes                 |\n");
	printf("|                                              |\n");
	printf("|----------------------------------------------|\n");
	printf("|**********************************************|\n");

	

	read_option_choice();
}




void read_option_choice(){
	int  menu_option;
	scanf("%d", &menu_option);

	if(menu_option==1){
		show_fibonnacy_serie ();	
	}

}


