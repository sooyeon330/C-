#include <stdio.h>
#include "header.h"

int main(){
	int dan = getUserInput();

	if (2 <= dan && dan <= 9){
		printGugudan(dan);
	}
	else {
		printGugudanAll();
	}

	return 0;
}