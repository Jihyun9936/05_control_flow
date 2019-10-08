#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*Lab01
int main(int argc, char *argv[]) {
	int input;
	
	printf("input the number : ");
	scanf("%d", &input);
	if (input>0)
		printf("It's a positive number.");
	else 
		printf("It's not a positive number.");
	return 0;
}*/

/*Lab02
int main(){
	int input, ab_val;
	
	printf("input the number : ");
	scanf("%d", &input);
	if(input<0)
		ab_val=-input;
	else
		ab_val=input;
	printf("|x| = %d\n", ab_val);
}*/

/*Lab03
int main(){
	int input;
	
	printf("input a integer : ");
	scanf("%d", &input);
	
	if(input>0)
		printf("It's a positive number.");
	else if(input<0)
		printf("It's a negative Number.");
	else 
		printf("Zero.");
}*/

/*Lab04
int main(){ 
	int i=0, meter;

	while(i<3){
		meter=i*1609;
		printf("%dm = %dmile\n", i, meter);
		i++;
	}
	return 0;
}*/

/*Lab05*/
int main(){
	int i;
	for(i=0; i<10; i++){
		printf("Hello World!\n");
	}
	return 0;
}
