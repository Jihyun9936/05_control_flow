#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*Lab01*/
int main(int argc, char *argv[]) {
	int input;
	
	printf("input the number : ");
	scanf("%d", &input);
	if (input>0)
		printf("It's a positive number.");
	else 
		printf("It's not a positive number.");
	return 0;
}
